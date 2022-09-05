#include "Peluquero.h"



Peluquero::Peluquero(string nombre){
	this->nombre = nombre;
}

Peluquero::~Peluquero(){
}

void Peluquero::CortaPeloA(Perro &b) {
	cout << "El perro " << b.getNombre() << " esta ";  //de perro
	cout << "siendo peluqueado por " << nombre << endl;    //de peluquero 
}