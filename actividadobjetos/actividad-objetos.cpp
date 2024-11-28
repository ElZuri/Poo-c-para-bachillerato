#include <iostream>
#include <string>

using namespace std;


class Persona{
//Crear una lista de variables para persona de forma privada.
    private:
        int edad;
        string cabello;
        float estatura;
        string nombre;
        string apellidos;
        int grado;
        string escuela;
//las variables solo se podran acceder a ellas a travez de funciones.
/*Declarar funciones para:
1-Correr.
2.-CumplirAños
3.-Establecer nombre y apellidos.
4.-Establecer estatura.
5.-Establecer escuela.
6.-Establecer grado.
7.-Mostrar Variables escolares (Apellidos, nombre, Grado, Escuela)
8.-Mostrar todas las variables.
*/
    public:
    void trabajar(){
        cout<<"Esta Trabajando"<<endl;
    }
        void correr(){//funcion 1
            cout<<nombre<<" "<<apellidos<<"esta corriendo."<<endl;
        }
        Persona &cumplirAños(int e){//funcion 2
        this->edad = e;
        return *this;
        }
        Persona &establecerNombreApellidos(string nom, string apell){//funcion 3
        this->nombre = nom;
        this->apellidos = apell;
        return *this;
        }
        Persona &outAll(){//funcion 8
            cout<<nombre;
            cout<<" "<<apellidos<<endl;
            cout<<edad<<endl;
        }
};
int main(){
//Llamar las funciones para 2 alumnos
    Persona *Alumno1 = new Persona();
    Alumno1->establecerNombreApellidos("Vanesa Itzel","Tirado Gonzalez");
    Alumno1->cumplirAños(14);
    Alumno1->correr();
    Alumno1->outAll();
}
