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
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
