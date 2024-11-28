#include <iostream>
#include <string>

using namespace std;


class Persona{
    private:
        int edad;
        string cabello;
        float estatura;
        string nombre;
        string apellidos;
        int grado;
        string escuela;

    public:

        void correr(){
            cout<<nombre<<" "<<apellidos<<"esta corriendo."<<endl;
        }
        Persona &cumplirAños(int e){
        this->edad = e;
        return *this;
        }
        Persona &establecerNombreApellidos(string nom, string apell){
        this->nombre = nom;
        this->apellidos = apell;
        return *this;
        }
        Persona &outAll(){
            cout<<nombre;
            cout<<" "<<apellidos<<endl;
            cout<<edad<<endl;
        }
};
int main(){
    Persona *Alumno1 = new Persona();
    Alumno1->establecerNombreApellidos("Vanesa Itzel","Tirado Gonzalez");
    Alumno1->cumplirAños(14);
    Alumno1->correr();
    Alumno1->outAll();
}