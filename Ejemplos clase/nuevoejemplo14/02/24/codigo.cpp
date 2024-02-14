#include <iostream>
#include <time.h>
#include <string.h>
#include "libreria.h"

#define _CRT_SECURE_NO_WARNINGS
using std::cin;
using std::cout;
using std::endl;

void UsarPersona(Persona *persona)
{
    cout << "-----------UTILIZANDO PERSONA ------------" << endl;
    persona->saludar();
    persona->hacerreir(rand());
    cout << "----------- PERSONA UTILIZADA ------------" << endl;
}


int main()
{
    srand(time(NULL)); // inicializa el generador de numeros aleatorios.
    // crear un objeto, existen dos formas de hacerlo.
    Persona persona1("Andrea", 19);
    Persona persona2("Teresa", 19);
    Persona *persona3 = new Persona("Abundio", 13); // cada vez que se agrega una persona de esta forma, se debe eliminar con delete

    persona1.saludar();
    UsarPersona(&persona2);

    cout << "----------- ADIOS ------------" << endl;
    delete persona3;
}
// Los constructores se utilizan para inicializar atributos de la clase. Y reservar memoria.

Persona::Persona()
{
    // Los constructores se utilizan para inicializar atributos y reservr recursos que pudiera utilizar el objeto
    edad = 20;
    nombre = (char *)malloc(7);
    strncpy(nombre, "Sosimo", 6); // Copia el contenido de la cadena de texto en el segundo argumento al primer argumento
    nombre[6] = 0;
}

Persona::Persona(const char *el_nombre, int la_edad) // constructor por defecto
{
    edad = la_edad;
    nombre = (char *)malloc(strlen(el_nombre) + 1);
    strncpy(nombre, el_nombre, strlen(el_nombre));
    nombre[strlen(el_nombre)] = 0;
}

void Foo()
{
    Persona persona_local("Gilberto", 27);
    persona_local.saludar();
    Persona *persona_dinamica;
    new Persona("AMLO", 72);
    persona_dinamica->saludar();
    if (true)
    {
        Persona otra_persona("Antonio", 20);
        otra_persona.hacerreir(rand());
    }
}

Persona::~Persona()
{
    if (nombre != nullptr)
    {
        cout << "Adios, " << nombre << endl;
        free(nombre);
    }
}

void Persona::reir()
{
    cout << "JAJAJA" << endl;
}

void Persona::comer()
{
    cout << "ÑAM ÑAM" << endl;
}

void Persona::saludar()
{
    cout << "Hola, soy " << nombre;
    cout << " y tengo " << edad << endl;
}

void Persona::hacerreir(int motivo)
{
    if ((motivo % 3) == 0) // cuando tu codigo es de una linea no ocupas llaves, pero igual usarlas.
    {
        reir();
    }
    else
    {
        cout << ":/" << endl;
    }
}

void Persona::liberar()
{
    free(nombre);
    nombre = nullptr;
}