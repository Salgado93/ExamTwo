#include "persona.h"
#include "administrador.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
Administrador::Administrador(string nombre,int edad,string identidad,int experiencia,string rango,double sueldo)
	:Persona(nombre,edad,identidad),experiencia(experiencia),rango(rango),sueldo(sueldo){
}
Administrador::~Administrador(){
}

string Administrador::toString()const{
	stringstream ss;
	ss << "Administrador " << Persona::toString() << " Experiencia: " << experiencia << " Rango: " << rango << " Sueldo $: " << sueldo;
	return ss.str();
}

