#include "persona.h"
#include "repartidor.h"
#include<iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;
using std::string;
using std::stringstream;
Repartidor::Repartidor(string nombre,int edad,string identidad,string dificultad,double dinero,Baraja* baraja)
	:Persona(nombre,edad,identidad),dificultad(dificultad),dinero(dinero),baraja(baraja){
}
Repartidor::~Repartidor(){
}

string Repartidor::toString()const{
	stringstream ss;
	ss << "Repartidor " << Persona::toString() << " Dificultad: " << dificultad << " Dinero: " << dinero;
	return ss.str();
}

