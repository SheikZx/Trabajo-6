#include<iostream>
#include "Jugador.h"
#include "Juego.h"
using namespace std;

int main (int argc, char *argv[]) {
	

	string jugador1;
	string jugador2;
	char ficha_jug1;
	char ficha_jug2;
	int lugar_ficha;
	Juego J;
	
	cout<<"Bienvenidos al TaTeTi!"<<endl;
	cout <<endl;
	
	cout<<"¿Quien jugara primero? ";
	cin>>jugador1;
	cout<<endl;
	cout<<"¿Cual sera tu tipo de ficha "<<jugador1<<"? (Ingresa un caracter): ";
	cin>>ficha_jug1;
	cout<<endl;
	
	cout<<"¿Y quien jugara en segundo lugar? ";
	cin>>jugador2;
	cout<<endl;
	if(jugador1==jugador2){
	do{
	if(jugador1==jugador2){
		cout<<"Elegi un nombre diferente a "<<jugador1<<"";
		cout<<endl;
		cout<<"¿Quien jugara en segundo lugar?";}
		cin>>jugador2;
		cout<<endl;
	}while(jugador1==jugador2);
	}
	cout<<"¿Que tipo de ficha usaras "<<jugador2<<"? (Ingresa un caracter): ";
	cin>>ficha_jug2;
	cout<<endl;
	if(ficha_jug1==ficha_jug2){
		do{
			if(ficha_jug1==ficha_jug2){
				cout<<"Elegi un tipo de ficha diferente a "<<ficha_jug1<<"";
				cout<<endl;
				cout<<"¿Que tipo de ficha usaras "<<jugador2<<"?";}
			cin>>ficha_jug2;
			cout<<endl;
		}while(ficha_jug1==ficha_jug2);
	}
	
	Jugador jug1(ficha_jug1, jugador1);
	Jugador jug2(ficha_jug2,jugador2);
	
	//Mostrar tablero
	J.mostrar_tablero();
	
	for(int i=0;i<9;i++){
		
		//Turno J1
		cout<<"¿Donde vas a colocar la ficha "<<jug1.get_nombre()<<"? (1 a 9) ";
		cin>>lugar_ficha;
		cout<<endl;
		

		//coloca la ficha
		J.posicionar_ficha(lugar_ficha, jug1.get_simbolo());
		//Mostrar tablero
		J.mostrar_tablero();
		//Revisar tablero
		J.control_tateti();
		J.final_juego();
		J.tablero_completo();
		J.final_juego();
		
		
		//Turno J2
		
		cout<<"¿Donde vas a colocar la ficha "<<jug2.get_nombre()<<"? (1 a 9) ";
		cin>>lugar_ficha;
		cout<<endl;
		

		//Coloca la ficha
		J.posicionar_ficha(lugar_ficha, jug2.get_simbolo());
		//Mostrar tablero
		J.mostrar_tablero();
		//Revisar tablero
		J.control_tateti();
		J.final_juego();
		J.tablero_completo();
		J.final_juego();
	}
	
	
	
	
	return 0;
}

