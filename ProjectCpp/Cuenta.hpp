#pragma once
#include <string>

using namespace std;

class Cuenta {
	int id;
	string codigo;
	double saldo;
	int consignaciones;
	int retiros;
	void setSaldo(double saldo);
	string toString(double monto);
public:
	Cuenta(string codigo, double saldo);
	~Cuenta();
	const static double saldoMinimo;
	string getCodigo();
	void setCodigo(double codigo);
	int getSaldo();
	int getConsignaciones();
	int getRetiros();
	void depositar(double monto);
	bool retirar(double monto);
	bool transferir(Cuenta* cuentaDestino, double monto);
};

