#pragma once
#include<string>

using namespace std;

class Cuenta {
	int id;
	string codigo;
	double saldo;
	int consignaciones;
	int retiros;
	void setSaldo(double saldo);
public:
	Cuenta(string codigo, double saldo);
	~Cuenta();
	const static double saldoMinimo;
	string getCodigo();
	void setCodigo(string codigo);
	double getSaldo();
	int getConsignaciones();
	int getRetiros();
	void depositar(double monto);
	bool retirar(double monto);
	bool transferir(Cuenta* cuentaDestino, double monto);
	string parseString(double valor);
	string toString();
};

