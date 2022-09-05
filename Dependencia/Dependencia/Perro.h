#pragma once
#include<iostream>
#include<sstream>
using namespace std;

class Perro
{
private:
	string nombre;
public:
	Perro(string);
	virtual ~Perro();
	string getNombre();
};

