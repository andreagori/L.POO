// Aqui estaran las clases declaradas.
#pragma once
#include <iostream>
#include <string>
#include "persona.h"

using std::cout;
using std::endl;

class CuentadeCheques
{
public:
	//Constructor
	// CuentadeCheques( const Persona &Propietario, int cuenta, int saldoInicial, char operacion);
	CuentadeCheques( const Persona& Propietario, int cuenta, int saldoInicial);
	// Agregar todas las funciones aqui.
	void depositos(int monto);
	void transferencia(CuentadeCheques &recibida, int monto);
	void retirar(int monto);
	// void estadoCuenta(const Persona& propietario);
	void estadoCuenta(const Persona& propietario);
	// void estadoCuentaDespues();
	void tiempoTransaccion();

protected:
	int numCuenta;
	Persona nombre;
	int saldo;
	std::string fechaOperacion;

};

