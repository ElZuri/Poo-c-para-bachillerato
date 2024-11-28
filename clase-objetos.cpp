//Bibliotecas
#include <iostream>
#include <string>
//Comando para no escribir std:: en las funciones standard de las bibliotecas
using namespace std;
//objeto Persona
class Persona {
    private://si es publica, todo el compilador puede acceder a el en cualquier momento
	//variables privadas
    string nombre;
    int edad;
	//funciones publicas
    public:
    Persona (string nombre, int edad){
    /*esta funcion es un CONSTRUCTOR, y nos sirve para crear 
    una persona con las variables unicas de un valor a nombre y edad desde la referencia de un
    puntero a la hora de crear el subobjeto.*/
	/*el puntero this toma como referencia la variable privada de memoria, y le asignara el
	nuevo valor de la variable nombre declarada en esta funcion,*/
        this->nombre = nombre;
        this->edad = edad;/*la primer variable hare referencia a la edad de la clase persona, y
        la segunda variable a la edad declarada en esta funcion*/
    }
    //destructor de un objeto tipo persona
    ~Persona(){
        cout << "Adios"<<endl;
    }
    //La diferencia entre un objeto y una estructura es que los objetos tienen metodos.
    //este metodo muestra muestra el nombre y la edad como si la subpersona estuviera saludando.
    void Saludar() {
        cout<<"Hola me llamo: " <<nombre<<endl;
        cout<<"Y tengo:"<<edad<<endl;
    }
    Persona &establerNombreDelAlumno(string nombre){//esta funcion nos permite cambiar el nombre de nuestro subobjeto.
        this->nombre = nombre;
        return *this;//nos va a devolver el valor guardado en nuestros punteros.
    }
    Persona &establerEdadDelAlumno(int edad){//con esta funcion nos permite cambiar la edad de nuestro subojeto.
        this->edad = edad;
        return *this;
    }
};

int main() {
	/*Creamos al Alumno 1 con el nombre Aaron y la edad de 18 años, que lleva la sintaxis de nuestro constructor
	el cual es "Persona (string nombre, int edad)"*/
    Persona *Alumno1 = new Persona("Aaron",18);

    Alumno1->Saludar();//El alumno 1 llama a la funcion Saludar().

    Alumno1->establerNombreDelAlumno("Angel").establerEdadDelAlumno(16);//cambiamos el nombre y edad de alumno 1

    Alumno1->Saludar();//El alumno 1 llama a la funcion Saludar().

    Alumno1->~Persona();//eliminamos a alumno1 de los registros de la memoria RAM.

return 0;
}
