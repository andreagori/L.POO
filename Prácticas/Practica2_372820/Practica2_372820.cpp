// Practica2_372820.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "persona.h"
#include "cuenta.h"

using std::cout;
using std::endl;

int main()
{
	// DECLARAR CLIENTES MAS EDAD
	Persona cuenta1("Teresa", 11);
	Persona cuenta2("Salvador", 20);
	Persona cuenta3("Isaac", 19);

	// DECLARAR CUENTAS CON NUM. DE CUENTA Y MONTO INICIAL.
	CuentadeCheques estado1(cuenta1, 70100, 100);
	CuentadeCheques estado2(cuenta2, 7011, 100);
	CuentadeCheques estado3(cuenta3, 7012, 100);

	// IMPRIMIR LOS ESTADOS DE CUENTA INICIALES.
	estado1.estadoCuenta(cuenta1);
	estado2.estadoCuenta(cuenta2);
	estado3.estadoCuenta(cuenta3);

	// REALIZAR LAS TRANSFERENCIAS, DEPOSITOS Y RETIROS.
	// Se realizo un deposito de 1000 a cuenta 1.
	estado1.depositos(1000);
	// Se realizo una transferencia de cuenta3 a cuenta 2.
	estado3.transferencia(estado2, 50);
	// Se realiza un retiro a cuenta 2
	estado2.retirar(25);
	// IMPRIMIMOS LOS NUEVOS ESTADOS DE CUENTA ACTUALIZADOS
	cout << "ESTADOS DE CUENTA ACTUALIZADOS!" << endl;
	estado1.estadoCuenta(cuenta1);
	estado2.estadoCuenta(cuenta2);
	estado3.estadoCuenta(cuenta3);
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu