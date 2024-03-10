// Practica3_372820.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Fracciones.h"
int main()
{
    // Fraccion con num enteros
    Fracciones fe(2, 4);

    // Creacion de fraccion
    string fraccion_cadena = "1/2 ";
    Fracciones fc = fraccion_cadena;

    cout << "Fraccion con enteros: " << fe << endl;
    cout << "Fraccion de cadena: " << fc << endl;

    // Suma de fracciones
    Fracciones fr_suma = fc.operator+(fe);
    cout << "Suma de fracciones: " << fe << " + " << fc << "= " << fr_suma << endl;

    // Resta de fracciones
    Fracciones fr_resta = fc.operator-(fe);
    cout << "Resta de fracciones: " << fc << " - " << fe << "= " << fr_resta << endl;

    // Multiplicacion de fracciones
    Fracciones fr_mult = fc.operator*(fe);
    cout << "Multiplicacion de fracciones: " << fc << " * " << fe << "= " << fr_mult << endl;

    // Division de fracciones
    Fracciones fr_div = fc.operator/(fe);
    cout << "Division de fracciones: " << fc << " / " << fe << "= " << fr_div << endl;
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
