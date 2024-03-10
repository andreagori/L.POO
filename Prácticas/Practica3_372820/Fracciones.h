#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include<sstream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::istringstream;
using std::ostream;


/* denominador. Cree un constructor para instanciar números
complejos especificando ambas partes del número, así como un constructor para instanciarlo
especificando la fracción en forma de cadena (por ejemplo “4/5”).*/


class Fracciones
{
public:
	//Constructor con numeros
	Fracciones(int numerador = 0, int denominador = 0);
	//Constructor con cadena
	Fracciones(const string cadena);

	// Funciones sin la sobrecarga
	Fracciones sumar(Fracciones frac);
	Fracciones restar(Fracciones frac);
	Fracciones multiplicar(Fracciones frac);
	Fracciones dividir(Fracciones frac);

	// Sobrecarga del operador de inserción para imprimir Fracciones
	friend ostream & operator<<(ostream & os, const Fracciones & fraccion);

	Fracciones operator+(const Fracciones& fraccion);
	Fracciones operator-(const Fracciones& fraccion);
	Fracciones operator*(const Fracciones& fraccion);
	Fracciones operator/(const Fracciones& fraccion);

	//Como el constructor no realiza ningun procedimiento especial, no es necesario crear destructores.

protected:
	int num;
	int denom;
	string operadorFraccion;
	string fraccion;

};

