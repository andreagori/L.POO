#include <iostream>
#include <time.h>
#include <string.h>
#include "persona.h"

#define _CRT_SECURE_NO_WARNINGS
using std::cin;
using std::cout;
using std::endl;

int main()
{
    srand(time(NULL)); // inicializa el generador de numeros aleatorios.
    // crear un objeto, existen dos formas de hacerlo.
    Persona la_persona("Andrea", 19); // CREANDOLO DE FORMA ESTATICA.

    // LA SEGUNDA FORMA ES DE MANERA DINAMICA, CON APUNTADOR
    // Se debe crear por el apuntador new, devuelve la direccion de memoria del objeto creado en el heap.
    Persona *nueva_persona;
    nueva_persona = new Persona("Teresa", 19);
    // La diferencia entre estos objetos, es que los estaticos se eliminan al final del programa,
    // y los dinamicos se eliminan con delete. Se borran explicitamente.
    // Se deben establecer la visibilidad de los atributos y metodos, si no se establece nada, por defecto es privado.

    // La principal dierencia entre los objetos en memoria estatica y los objetos en memoria dinamica es que los objetos estaticos se eliminan
    // automaticamente cuando el programa o bloque de codigo termina, mientras que los objetos dinamicos no. Es necesario liberar la memoria manualmente (delete)

    // Para utilziar el objeto, podemos acceder a sus miembros (variables o funciones) por medio de los mismos operadores que utilizamos para las estructuras
    //  . cuando es estatico
    //  -> cuando es dinamico
    la_persona.saludar();
    la_persona.hacerreir(rand());
    nueva_persona->saludar();
    nueva_persona->hacerreir(rand());

    Persona tercera_persona("Juan", 20);
    tercera_persona.saludar();

    delete nueva_persona; // se borra el objeto creado en el heap.
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