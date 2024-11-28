#include <iostream>
#include <string>

using namespace std;

class Animal {
    protected:
    string nombre;
    int cantidad;
public:
Animal (string nombre, int cantidad){
    
        this->nombre = nombre;
        this->cantidad = cantidad;
        return* this;
}
    virtual void moverse() {
        std::cout << "El animal se mueve" << std::endl;
    }
};

class Perro : public Animal {
public:
    void moverse() override {
        std::cout << "El perro corre" << std::endl;
    }
};

class Pajaro : public Animal {
public:
    void moverse() override {
        std::cout << "El pájaro vuela" << std::endl;
    }
};

class Pulpo : public Animal {
public:
    void moverse() override {
        std::cout << "El pulpo nada." << std::endl;
    }
};

class Lombris : public Animal {
public:
    void moverse() override {
        std::cout << "La lombris escarba" << std::endl;
    }
};

int main() {
    Animal* vertebrados[] = {new Perro("Doby",1), new Pajaro("Guacamaya",5)};
    vertebrados[1]->moverse();
    vertebrados[0]->moverse();

    Animal* invertebrados[] = {new Pulpo(), new Lombris()};

    invertebrados[0]->moverse();
    invertebrados[1]->moverse();
    return 0;
}