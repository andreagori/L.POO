class Persona
{
    /*
    public: // Se puede acceder a los atributos y metodos desde cualquier parte del programa.
    protected: // Se puede acceder a los atributos y metodos desde la misma clase y sus subclases.
    private: // Solo se puede acceder a los atributos y metodos desde la misma clase.
    */
protected:
    int edad;
    // char nombre[20];
    char *nombre;
    void reir();
    void comer();

public:
    // los objetos pueden tener un constuctor, que es un metodo que se llama al crear el objeto.
    // el constructor debe ser una funcion que tiene el mismo nombre de la clase. y no tiene tipo de retorno.
    Persona(const char *el_nombre, int la_edad); // constructor por defecto
    Persona();                                   // constructor por defecto

    // En c++ podemos usar el mismo nombre para diferentes funciones, siempre y cuando los parametros sean diferentes
    // Ciamdp implementamos funciones de este tipo, se le llama sobrecarga de funciones

    // Los objetos pueden tener un destructor, El destructor es una funcion que se ejecuta automaticamente cuando el objeto es eliminado
    // El destructor es una funcion que tiene el mismo nombre que la clase, pero precedido por el simbolo ~
    ~Persona();

    void saludar();
    void hacerreir(int motivo);
    void liberar();
};

// Protegido si se tiene subclases si se podran acceder a los atributos.
// Con privado, las subclases no pueden acceder a los atributos.

/*
NOTAS DE CLASE 14/FEBRERO 
Si reservamos memoria con new, devolvemos con delete
si reservamos memoria con malloc, devolvemos con free

El persona otra, es un objeto que se crea en el stack, y se elimina automaticamente cuando se sale del scope. (bloque de codigo)

*/