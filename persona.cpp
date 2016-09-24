#include <iostream>
#include "persona.h"
#include <string>
#include <sstream>
using namespace std;
using std::string;
using std::stringstream;
Persona::Persona(string nombre,int edad,string identidad):nombre(nombre),edad(edad),identidad(identidad){
}
string Persona::getNombre(){
	return nombre;
}
string Persona::getId(){
	return identidad;
}
Persona::~Persona(){
	cout << "Destructor Persona: " << this << endl;
}
string Persona::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre << " Edad: " << edad << " Identidad: " << identidad;
	return ss.str();
}

