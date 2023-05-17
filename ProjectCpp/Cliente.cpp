#include "Cliente.h"

Cliente::Cliente(int idCliente, string nombre, string apellido, EGenero genero, string telefono) {	
	this->idCliente = idCliente, 
	this->nombre = nombre, 
	this->apellido = apellido,
	this->genero = genero,
	this->telefono = telefono;
};

Cliente::~Cliente() {
	for (Cuenta* cuenta : cuentas) {
		delete(cuenta);
	}
}

int Cliente::getIdCliente() {
	return idCliente;
}

void Cliente::setIdCliente(int idCliente) {
	this->idCliente = idCliente;
}

string Cliente::getNombre() {
	return nombre;
}

void Cliente::setNombre(string nombre) {
	this->nombre = nombre;
}

string Cliente::getApellido() {
	return apellido;
}

void Cliente::setApellido(string apellido) {
	this->apellido = apellido;
}

EGenero Cliente::getGenero() {
	return genero;
}

void Cliente::setGenero(EGenero genero) {
	this->genero = genero;
}

string Cliente::getTelefono() {
	return telefono;
}

void Cliente::setTelefono(string telefono) {
	this->telefono = telefono;
}

vector<Cuenta*> Cliente::obtenerCuentas() {
	return vector<Cuenta*>(Cliente::cuentas);
}

void Cliente::agregarCuenta(Cuenta* nuevaCuenta) {
	cuentas.push_back(nuevaCuenta);
}