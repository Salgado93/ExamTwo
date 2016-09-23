#include "persona.h"
#include "jugador.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
Jugador::Jugador(string nombre,int edad,string identidad,string procedencia,string apodo,double monto)
	:Persona(nombre,edad,identidad),procedencia(procedencia),apodo(apodo),monto(monto){
}
Jugador::~Jugador(){
}

string Jugador::toString()const{
	stringstream ss;
	ss << "Jugador " << Persona::toString() << " Procedencia: " << procedencia << " Apodo: " << apodo << " Monto $: " << monto;
	return ss.str();
}
