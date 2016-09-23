#include "baraja.h"
#include<iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;
Baraja::Baraja(int* palos,int* valores,int** cartas):palos(palos),valores(valores),cartas(cartas){
}
Baraja::~Baraja(){
}


void Baraja::shuffleDeck(int cartas[][14], int palos[], int valores[] ) {
	int tipoCarta;;
 	int numeroCarta;
 	for ( int contador = 1; contador <= 52; contador++ ){
		do{
			tipoCarta = 1 + rand() % 4;
 			numeroCarta = 1 + rand() % 13;
		} while( 0 != cartas[tipoCarta][numeroCarta]);
 		if (0  == cartas[tipoCarta][numeroCarta] ){
 			cartas[tipoCarta][numeroCarta] = contador;
 			palos[contador] = tipoCarta;
 			valores[contador] = numeroCarta;
 		}
	
 	}	 
}
void Baraja::mostrarMano( int deck[][14]){
 	const char *valores[14] = { "0", "As", "Dos", "Tres", "Cuatro", "Cinco",
 	"Seis", "Siete", "Ocho", "Nueve", "Diez",
 	"Jota", "Reina", "Rey"};
	const char *palos[5] = { "0", "Corazones", "Treboles", "Espadas","Diamantes"}; 	
 	for ( int r = 1; r <= 5; r++ ){
 		for ( int y = 1; y <= 4; y++ ){
 			for ( int z = 1; z <= 13; z++ ){
 				if ( r == deck[y][z]){
					cout << valores[z] << palos[y];	
				}	
 			}
 		} 
 	}
 }
