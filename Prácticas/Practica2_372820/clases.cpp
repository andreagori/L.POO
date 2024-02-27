#include "cuenta.h"
// Aqui se desarrollaran las funciones de las clases, supongo. Validaciones y asi.

CuentadeCheques::CuentadeCheques(const Persona& Propietario, int cuenta, int saldoInicial)
{
	numCuenta = cuenta;
	saldo = saldoInicial;
	nombre = Propietario;
}

void CuentadeCheques::tiempoTransaccion()
{
	time_t tiempo;
	time(&tiempo);
	char buffer[26];
	ctime_s(buffer, sizeof(buffer), &tiempo);
	fechaOperacion = buffer;
}

void CuentadeCheques::depositos(int monto)
{
	saldo += monto;
	tiempoTransaccion();
}

void CuentadeCheques::transferencia(CuentadeCheques& recibida, int monto)
{
	if (saldo < monto)
	{
		cout << "SALDO INSUFICIENTE" << endl;
	}
	else
	{
		saldo -= monto;
		recibida.depositos(monto);
		// HACER FUNCION DE TIEMPO.
		recibida.tiempoTransaccion();
		tiempoTransaccion();
	}

}

void CuentadeCheques::retirar(int monto)
{
	if (saldo < monto)
	{
		cout << "SALDO INSUFICIENTE" << endl;
	}
	else
	{
		saldo -= monto;
		// HACER FUNCION DE TIEMPO.
		tiempoTransaccion();
	}

}

void CuentadeCheques::estadoCuenta(const Persona& propietario )
{
	cout << "=========================================" << endl;
	cout << "|\t ESTADO DE CUENTA  \t|" << endl;
	cout << "=========================================" << endl;
	cout << "| CUENTA: " << endl;
	cout << "|---------------------------------------" << endl;
	cout << "| Nombre: " << propietario.GetNombre() << endl;
	cout << "| Edad: " << propietario.GetEdad() << endl;
	cout << "| Saldo Inicial: " << saldo << endl;
	if (fechaOperacion.empty())
	{
		cout << "| Fecha del ultimo movimiento: No hay movimientos" << endl;
	}
	else
	{
		cout << "| Fecha del ultimo movimiento: " << fechaOperacion << endl;
	}
	cout << "=========================================" << endl;


}
