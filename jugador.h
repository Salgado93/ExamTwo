#pragma once
#include "persona.h"

class Jugador : public Persona{
	string procedencia;
	string apodo;
	double monto;
 public:
	Jugador(string,int,string,string,string,double);
	virtual  ~Jugador();
	virtual string toString()const;
};
