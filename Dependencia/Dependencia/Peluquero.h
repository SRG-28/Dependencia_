#pragma once
#include<iostream>
#include<sstream>
#include"Perro.h"
using namespace std;

class Peluquero; //declaracion previa
class Perro; // declaracion previa

class Peluquero
{
private:
	string nombre;
public:
	Peluquero(string);
	virtual ~Peluquero();
	virtual void CortaPeloA(Perro&);
};

