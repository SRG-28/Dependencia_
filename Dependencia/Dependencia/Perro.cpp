#include "Perro.h"



Perro::Perro(string nombre){
	this->nombre = nombre;
}

Perro::~Perro(){
}

string Perro::getNombre() {
	return nombre;
}
