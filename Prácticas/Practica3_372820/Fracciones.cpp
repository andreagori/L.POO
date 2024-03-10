#include "Fracciones.h"

Fracciones::Fracciones(int numerador, int denominador)
{
	this->num = numerador;
	this->denom = denominador;
}

Fracciones::Fracciones(const string cadena)
{
    fraccion = cadena;

    // Buscar la posición del separador "/" en la cadena.
    size_t pos = cadena.find('/');

    // Verificar si se encontró el separador.
    if (pos == string::npos) {
        cout << "Error: La cadena debe tener el formato 'numerador/denominador'.";
        return;
    }

    // Extraer el numerador y el denominador
    string numerador_str = cadena.substr(0, pos); // parametros de la funcion substr: (posicion_inicial, cantidad_de_caracteres).
    string denominador_str = cadena.substr(pos + 1); // aqui se le suma 1 para que no tome el caracter "/" como parte del denominador.

    // Convertir los strings a enteros
    num = stoi(numerador_str);
    denom = stoi(denominador_str);

    // Validaciones, en caso de que el denominador sea 0 o coloquen un numero negativo.
    if (denom == 0) {
        cout << "Error: El denominador no puede ser cero.";
        return;
    }
    if (num < 0 || denom < 0) {
        cout << "Error: El numerador y el denominador deben ser positivos.";
        return;
    }
}


// Implementación de la sobrecarga del operador de inserción para imprimir Fracciones
std::ostream& operator<<(std::ostream& os, const Fracciones& fraccion)
{
	os << fraccion.num << "/" << fraccion.denom;
	return os;
}

Fracciones Fracciones::sumar(Fracciones frac)
{
	Fracciones resultado;

	resultado.num = (this->num * frac.denom) + (this->denom * frac.num);
	resultado.denom = (this->denom * frac.denom);
	return resultado;
}

Fracciones Fracciones::restar(Fracciones frac)
{
	Fracciones resultado;

	resultado.num = (this->num * frac.denom) - (this->denom * frac.num);
	resultado.denom = (this->denom * frac.denom);
	return resultado;
}

Fracciones Fracciones::multiplicar(Fracciones frac)
{
	Fracciones resultado;
	resultado.num = (this->num * frac.num);
	resultado.denom = (this->denom * frac.denom);

	return resultado;
}

Fracciones Fracciones::dividir(Fracciones frac)
{
	Fracciones resultado;
	resultado.num = (this->num * frac.num);
	resultado.denom = (this->num * frac.denom);
	return resultado;
}

// Sobrecarga de operadores

Fracciones Fracciones::operator+(const Fracciones& fraccion)
{
    Fracciones resultado;
    resultado = this->sumar(fraccion);
    return resultado;
}

Fracciones Fracciones::operator-(const Fracciones& fraccion)
{
    Fracciones resultado;
    resultado = this->restar(fraccion);
    return resultado;
}

Fracciones Fracciones::operator*(const Fracciones& fraccion)
{
    Fracciones resultado;
    resultado = this->multiplicar(fraccion);
    return resultado;

}

Fracciones Fracciones::operator/(const Fracciones& fraccion)
{
    Fracciones resultado;
    resultado = this->dividir(fraccion);
    return resultado;

}


