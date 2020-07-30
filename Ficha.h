#ifndef FICHA_H
#define FICHA_H

class Ficha {
public:
	Ficha();
	Ficha(char c,int x);
	int get_posicion();
	void set_posicion(int x);
	char get_simbolo();
	void set_simbolo(char c);
private:
	int posicion;
	char simbolo;
};

#endif

