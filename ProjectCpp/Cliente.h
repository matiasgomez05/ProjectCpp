#pragma once
#include"Cuenta.h";
#include"EGenero.h";
#include<vector>;

using namespace std;

class Cuenta;
class Cliente
{
	int idCliente;
	string nombre;
	string apellido;
	EGenero genero;
	string telefono;
	vector<Cuenta*> cuentas;
public:
	Cliente(int idCliente, string nombre, string apellido, EGenero genero, string telefono);
	~Cliente();
	int getIdCliente();
	void setIdCliente(int idCliente);
	string getNombre();
	void setNombre(string nombre);
	string getApellido();
	void setApellido(string apellido);
	EGenero getGenero();
	void setGenero(EGenero genero);
	string getTelefono();
	void setTelefono(string telefono);
	vector<Cuenta*> obtenerCuentas();
	void agregarCuenta(Cuenta* cuenta);
};

