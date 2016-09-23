#pragma once
#include "persona.h"
#include "baraja.h"
class Repartidor : public Persona{
	string dificultad;
	double dinero;
	Baraja baraja;
 public:
	Repartidor(string,int,string,string,double,Baraja);
	virtual  ~Repartidor();
	virtual string toString()const;
	
};
