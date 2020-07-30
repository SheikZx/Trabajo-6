#include "Juego.h"
#include <iostream>
using namespace std;

Juego::Juego() {
	for (int i = 0; i<9; i++){
		tablero[i] = ' ';
	}
}

void Juego::posicionar_ficha(int posicion,char simbo){
	if(tablero[posicion-1] != ' '){
			do{
				cout<<"Ese lugar ya esta ocupado por una ficha"<<endl;
				cout<<"¿Donde vas a colocar la ficha?"<<endl;
				cin>>posicion;
				cout<<endl;
			} while(tablero[posicion-1] != ' ');
			tablero[posicion-1]= simbo;
	}else{
	tablero[posicion-1]= simbo;}
}

void Juego::control_tateti(){
	if ((tablero[0]==tablero[1]) && (tablero[1] == tablero[2]) && (tablero[0] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[0]==tablero[4]) && (tablero[4] == tablero[8])&& (tablero[0] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[0]==tablero[3]) && (tablero[3] == tablero[6])&& (tablero[0] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[1]==tablero[4]) && (tablero[4] == tablero[7])&& (tablero[1] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[2]==tablero[5]) && (tablero[5] == tablero[8])&& (tablero[2] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[3]==tablero[4]) && (tablero[4] == tablero[5])&& (tablero[3] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[2]==tablero[4]) && (tablero[4] == tablero[6])&& (tablero[2] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
	else if((tablero[6]==tablero[7]) && (tablero[7] == tablero[8])&& (tablero[6] != ' ')){
		cout<<"TATETI!!";
		Juego::fin_partida=1;
	}
}

int Juego::tablero_completo(){
		if((tablero[0]!= ' ') && (tablero[1]!= ' ') && (tablero[2]!= ' ') && (tablero[3]!= ' ') && (tablero[4]!= ' ') && (tablero[5]!= ' ') && (tablero[6]!= ' ') && (tablero[7]!=' ') && (tablero[8]!= ' ')){
			cout<<"El tablero esta lleno :s";
			Juego::fin_partida=1;
		}
}

int Juego::mostrar_tablero(){
	cout<<"  "<<tablero[0]<< "/" <<tablero[1]<< "/" <<tablero [2]<<endl;
	cout<<"  "<<tablero[3]<< "/" <<tablero[4]<< "/" <<tablero [5]<<endl;
	cout<<"  "<<tablero[6]<< "/" <<tablero[7]<< "/" <<tablero [8]<<endl;
	cout<<endl<<endl;
}

int Juego::final_juego(){
	if(Juego::fin_partida==1){
		exit(EXIT_SUCCESS);
	}
}

char Juego::get_tablero(int ficha_lugar){
	return tablero[ficha_lugar];
}
