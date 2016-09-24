#include "persona.h"
#include "administrador.h"
#include "jugador.h"
#include "repartidor.h"
#include "mesa.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <typeinfo>

using namespace std;



int main(int argc, char* argv[]){
	int opcion = 0;
	vector <Persona*>personas;
	vector <Mesa*>mesas;
	personas.push_back(new Administrador("Daniel",21,"1993",5,"Gerente",5000));
	personas.push_back(new Jugador("Santiago",21,"1995","Tegucigalpa","Salgado",450));
	cout << "Usuarios En EL Sistema: " << endl;
	cout << endl;
	for (int i=0; i<personas.size(); i++){
		cout << i << " " << personas[i]->toString() << endl;
        }
	cout << endl;

	cout << "Login: " << endl;
	string id;
	string nombre;
	cout << "Ingrese Nombre" << endl;
	cin >> nombre;
	cout << "Ingrese Identidad" << endl;
	cin >> id;
	for (int i=0; i<personas.size(); i++){
		if(personas[i]->getNombre() == nombre && personas[i]->getId()== id){
			if(Administrador *a = dynamic_cast<Administrador*>(personas[i])){
				int op = 0;
				while(op != 4){
					cout << "1. Agregar Mesas: " << endl;
					cout << "2. Modificar Mesas: " << endl;
					cout << "3. Eliminar Mesas: " << endl;
					cin >> op;
					if(op == 1){
						int numero;
						string tipo;
						string nombre;
						int edad;
						string id;
						string dificultad;
						double dinero;
						int** cartas = new int*[14];
						for(int i =0; i < 14 ;i++){
							cartas[i]=new int[5];
						}
						int* palos = new int[53];
 						int* valores = new int[53];
						cout << "Ingrese Numero De Mesa: " << endl;
						cin >> numero;
						cout << "Ingrese El Tipo VIP,CLASICA,VIAJERO: " << endl;
						cin >> tipo;
						cout << "Ingrese Repartidor" << endl;
						cout << "Ingrese Nombre: " << endl;
						cin >> nombre;
						cout << "Ingrese Edad: " << endl;
						cin >> edad;
						cout << "Ingrese Id: " << endl;;
						cin >> id;
						cout << "Ingrese Dificultad: " << endl;
						cin >> dificultad;
						cout << "Ingrese Dinero: " << endl;
						cin >> dinero;
						cout << "Ingrese Jugador: " << endl;
						string nombre1;
						int edad1;
						string id1;
						string procedencia;
						string apodo;
						double monto;
						cout << "Ingrese Nombre: " << endl;
						cin >> nombre1;
						cout << "Ingrese Edad: " << endl;
						cin >> edad1;
						cout << "Ingrese Identidad: " << endl;
						cin >> id1;
						cout << "Ingrese Procedencia: " << endl;
						cin >> procedencia;
						cout << "Ingrese Apodo " << endl;
						cin >> apodo;
						cout << "Ingrese Monto: " << endl;
						cin >> monto;
						Jugador* jugador = new Jugador(nombre1,edad1,id1,procedencia,apodo,monto);
						Baraja* baraja = new Baraja(palos,valores,cartas);
						Repartidor* repartidor = new Repartidor(nombre,edad,id,dificultad,dinero,baraja);
						mesas.push_back(new Mesa(numero,tipo,repartidor,jugador));
						cout << "MESA AGREGADA" << endl;
					}
					if (op == 2){
					
					}
					if(op == 3){
						int pos;
						for (int i=0; i<mesas.size(); i++){
							cout << i << " " << mesas[i]->toString() << endl;
                        			}
						cout << "Ingrese La Posicion A Borrar: " << endl;
						cin >> pos;
						mesas.erase(mesas.begin()+pos);
						cout << "ELIMINADO" << endl;
					}
				}				
			}	
		}
	}
	/*while(opcion != 3){
		cout << "1. Agregar Persona" << endl;
		cout << "2. Login" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;
		if(opcion == 1){
			int op = 0;
			

		}
	}*/
	return 0;
}
