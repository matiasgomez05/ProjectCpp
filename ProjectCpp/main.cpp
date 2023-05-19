#include <iostream>
#include "Cuenta.h"
#include "Cliente.h"
#include "EGenero.h"

using namespace std;

int main() {

	Cliente* cl1 = new Cliente(1, "Matias", "Gomez", EGenero::MASCULINO, "00-01-02");
	Cliente* cl2 = new Cliente(1, "Yohana", "Canteros", EGenero::FEMENINO, "00-01-02");

	Cuenta* cu1 = new Cuenta(cl1, "AA001", 500000);
	Cuenta* cu2 = new Cuenta(cl2, "AA002", 100000);
	
	cu1->depositar(10000);
	cu1->retirar(1000);
	cu1->transferir(cu2, 40000);

	cu2->setCodigo("BB001");
	
	cout << cu1->toString() << endl;
	cout << cu2->toString() << endl;

	delete(cu1);
	delete(cu2);
	return 0;
}