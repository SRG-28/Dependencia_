#include"Peluquero.h"
#include"Perro.h"
using namespace std;

int main() {
	Peluquero* a1 = new Peluquero("James");
	Perro* b1 = new Perro("Tobi");
	a1->CortaPeloA(*b1);
	Peluquero* a2 = new Peluquero("Sofia");
	Perro* b2 = new Perro("Coqueta");
	a2->CortaPeloA(*b2);
	Peluquero* a3 = new Peluquero("Ambar");
	Perro* b3 = new Perro("Summer");
	a3->CortaPeloA(*b3);

	delete b1;
	delete a1;
	delete b2;
	delete a2;
	system("pause");
	return 0;
}
