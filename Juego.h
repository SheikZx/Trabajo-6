#ifndef JUEGO_H
#define JUEGO_H
#include "Jugador.h"
#include "Ficha.h"

class Juego {
public:
	Juego();
	void posicionar_ficha(int posicion_ficha, char simbo);
	void control_tateti();
	int tablero_completo();
	int mostrar_tablero();
	bool check_final();
	int final_juego();
	char get_tablero(int ficha_lugar);
private:
	char tablero [9]={};
	int fin_partida=0;
};

#endif

