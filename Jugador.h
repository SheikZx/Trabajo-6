#ifndef JUGADOR_H
#define JUGADOR_H
#include "Ficha.h"
#include <string>
using namespace std;

class Jugador {
public:
	Jugador();
	Jugador(char c, string nombre_jug);
	void set_nombre(string nombre_jug);
	string get_nombre();
	char get_simbolo();
private:
	string nombre;
	char simbolo_ficha;
};

#endif

