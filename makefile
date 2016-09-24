main: main.o persona.o administrador.o jugador.o repartidor.o mesa.o baraja.o
	g++ main.o persona.o administrador.o jugador.o repartidor.o mesa.o baraja.o -o exam2  
	
main.o:	main.cpp persona.h administrador.h jugador.h repartidor.h mesa.h  
	g++ -c main.cpp --std=c++11 

persona.o:		persona.cpp persona.h
	g++ -c persona.cpp 

administrador.o:	administrador.cpp administrador.h persona.h
	g++ -c administrador.cpp

repartidor.o:	repartidor.cpp repartidor.h persona.h baraja.h
	g++ -c repartidor.cpp

mesa.o:		mesa.cpp mesa.h jugador.h repartidor.h
	g++ -c 	mesa.cpp


