#pragma once
#include <string>
using std::string;

class Persona{
	string nombre;
	int edad;
	string identidad;
 public:
	Persona(string,int,string);
	virtual ~Persona(); 
 	virtual string toString()const;
};
