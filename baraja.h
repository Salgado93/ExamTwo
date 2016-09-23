#pragma once

class Baraja{
	int* palos;
 	int* valores;
	int** cartas;
 public:
	Baraja(int* palos, int* valores,int** cartas);
	virtual  ~Baraja();
	void shuffleDeck( int[][14], int[], int[] );
	void mostrarMano( int[][14] );
};
