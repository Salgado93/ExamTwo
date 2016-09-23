#pragma once
#include "jugador.h"
#include "repartidor.h"
#include <string>
using std::string;

class Mesa{
	string nombre;
	string tipo;
	Repartidor repartidor;
	Jugador j;
 public:
	Mesa(string,string,Repartidor,Jugador);
	virtual ~Mesa(); 
 	virtual string toString()const;
};
