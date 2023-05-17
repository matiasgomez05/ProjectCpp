#pragma once
#include"Cliente.h";
#include<string>

using namespace std;

class Cliente;
class Cuenta {
	int idCuenta;
	string codigo;
	double saldo;
	int consignaciones;
	int retiros;
	Cliente* cliente;
	void setSaldo(double saldo);
public:
	Cuenta(Cliente* cliente, string codigo, double saldo);
	~Cuenta();
	const static double saldoMinimo;
	string getCodigo();
	void setCodigo(string codigo);
	double getSaldo();
	int getConsignaciones();
	int getRetiros();
	Cliente* getCliente();
	void setCliente(Cliente* cliente);
	void depositar(double monto);
	bool retirar(double monto);
	bool transferir(Cuenta* cuentaDestino, double monto);
	string parseString(double valor);
	string toString();
};

