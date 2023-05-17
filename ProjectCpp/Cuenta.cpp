#include"Cuenta.h"
#include<iostream>
#include<sstream>

const double Cuenta::saldoMinimo = 10000;

Cuenta::Cuenta(Cliente* cliente, string codigo, double saldo) {
	this->cliente = cliente;
	this->codigo = codigo;
	this->saldo = saldo;
	this->consignaciones = 0;
	this->retiros = 0;
}

Cuenta::~Cuenta() {

}

string Cuenta::getCodigo() {
	return codigo;
}

void Cuenta::setCodigo(string codigo) {
	this->codigo = codigo;
}

double Cuenta::getSaldo() {
	return saldo;
}

void Cuenta::setSaldo(double saldo) {
	this->saldo = saldo;
}

int Cuenta::getConsignaciones() {
	return consignaciones;
}

int Cuenta::getRetiros() {
	return retiros;
}

Cliente* Cuenta::getCliente() {
	return cliente;
}

void Cuenta::setCliente(Cliente* cliente) {
	this->cliente = cliente;
}

void Cuenta::depositar(double monto) {
	saldo += monto;
	consignaciones++;
}

bool Cuenta::retirar(double monto) {
	if (monto <= ( saldo - saldoMinimo ) ){
		saldo -= monto;
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

string Cuenta::parseString(double valor) {
	ostringstream aux;
	aux << valor;

	return aux.str();
}

string Cuenta::toString() { 
	return
		"Cuenta Nro: " + codigo + ", " +
		"Saldo: " + parseString(saldo) + ", " +
		"Consignaciones: " + parseString(consignaciones) + ", " +
		"Retiros: " + parseString(retiros) + ". ";
}