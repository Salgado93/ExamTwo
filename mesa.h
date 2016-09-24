#pragma once
#include "jugador.h"
#include "repartidor.h"
#include <string>
using std::string;

class Mesa{
	int numero;
	string tipo;
	Repartidor* repartidor;
	Jugador* j;
 public:
	Mesa(int,string,Repartidor*,Jugador*);
	virtual ~Mesa(); 
 	virtual string toString()const;
};
