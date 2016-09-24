#include <iostream>
#include "mesa.h"
#include <string>
#include <sstream>

using namespace std;
using std::string;
using std::stringstream;
Mesa::Mesa(int numero,string tipo,Repartidor* repartidor,Jugador* j):numero(numero),tipo(tipo),repartidor(repartidor),j(j){
}
Mesa::~Mesa(){
	cout << "Destructor Mesa: " << this << endl;
}
string Mesa::toString()const{
	stringstream ss;
	ss << "Numero: " << numero << " Tipo: " << tipo;
	return ss.str();
}
