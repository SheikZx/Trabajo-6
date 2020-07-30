#include "Ficha.h"

Ficha::Ficha(){
	
}

Ficha::Ficha(char c, int x) {
	simbolo = c;
	posicion= x;
}

void Ficha::set_posicion(int x){
	posicion= x;
}

int Ficha::get_posicion(){
	return posicion;
}

void Ficha::set_simbolo(char c){
	simbolo = c;
}

char Ficha::get_simbolo(){
	return simbolo;
}
