#pragma once
#include "persona.h"

class Administrador : public Persona{
	int experiencia;
	string rango;
	double sueldo;
 public:
	Administrador(string,int,string,int,string,double);
	virtual  ~Administrador();
	virtual string toString()const;
	
};
