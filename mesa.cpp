#include <iostream>
#include "mesa.h"
#include <string>
#include <sstream>

using namespace std;
using std::string;
using std::stringstream;
Mesa::Mesa(string nombre,string tipo,Repartidor repartidor,Jugador j):nombre(nombre),tipo(tipo),repartidor(repartidor),j(j){
}
Mesa::~Mesa(){
	cout << "Destructor Mesa: " << this << endl;
}
string Mesa::toString()const{
	stringstream ss;
	ss << "Nombre: " << nombre << " Tipo: " << tipo;
	return ss.str();
}
