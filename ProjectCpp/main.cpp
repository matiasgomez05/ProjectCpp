#include <iostream>
#include "Cuenta.h"

using namespace std;

int main() {
	Cuenta* c1 = new Cuenta("AA001", 500000);
	Cuenta* c2 = new Cuenta("AA002", 100000);
	
	c1->depositar(10000);
	c1->retirar(1000);
	c1->transferir(c2, 40000);

	c2->setCodigo("BB001");
	
	cout << c1->toString() << endl;
	cout << c2->toString() << endl;

	delete(c1);
	delete(c2);
	return 0;
}