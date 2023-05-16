#include "Cuenta.hpp"
#include<sstream>

const static double saldoMinimo = 10000;

Cuenta::Cuenta(string codigo, double saldo) {
	this->codigo = codigo;
	this->saldo = saldo;
	this->consignaciones = 0;
	this->retiros = 0;
}

Cuenta::~Cuenta() {

}

string Cuenta::getCodigo() {
	return this->codigo;
}

void Cuenta::setCodigo(double codigo) {
	this->codigo = codigo;
}

int Cuenta::getSaldo() {
	return this->saldo;
}

void Cuenta::setSaldo(double saldo) {
	this->saldo = saldo;
}

int Cuenta::getConsignaciones() {
	return this->consignaciones;
}

int Cuenta::getRetiros() {
	return this->retiros;
}

void Cuenta::depositar(double monto) {
	setSaldo( getSaldo()+monto );
	consignaciones++;
}

bool Cuenta::retirar(double monto) {
	if (monto <= getSaldo() - saldoMinimo){
		setSaldo(getSaldo() - monto);
		retiros++;

		return true;
	}

	return false;
}

bool Cuenta::transferir(Cuenta* cuentaDestino, double monto) {
	if (retirar(monto)) {
		cuentaDestino->depositar(monto);
		return true;
	}

	return false;
}

string Cuenta::toString(double monto) { 

}