#include "Jugador.h"

Jugador::Jugador(){
	
}

Jugador::Jugador(char c, string nombre_jug) {
	simbolo_ficha = c;
	nombre = nombre_jug;
}

void Jugador::set_nombre(string nombre_jug){
	nombre = nombre_jug;
}

string Jugador::get_nombre(){
	return nombre;
}

char Jugador::get_simbolo(){
	return simbolo_ficha;
}
