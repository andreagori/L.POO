#include <iostream>
// #include "persona.h" //esto no va en visual studio, pero si aqui.

using std::cin;
using std::cout; // se pueden declarar en la misma linea, pero debes agregarle el std igual.
using std::endl;
int main()
{
    cout << "Hola Mundo" << endl;
    int x = 7;
    float pi = 3.141516;
    char cadena[] = "BRENDA";

    cout << "Valor de X: " << x << endl;
    cout << "El valor de pi es: " << pi << endl;
    cout << "El nombre guardado en la cadena es: " << cadena << endl;
    cout << "Escribe el nuevo valor de X: " << x << endl;
    cin >> x; // cin es para leer datos del teclado
}
