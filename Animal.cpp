#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string nombre;
    string especie;
    int edad;

public:
    Animal(string n, string e, int a) : nombre(n), especie(e), edad(a) {}

    string getNombre() { return nombre; }
    string getEspecie() { return especie; }
    int getEdad() { return edad; }

    void setNombre(string n) { nombre = n; }
    void setEspecie(string e) { especie = e; }
    void setEdad(int a) { edad = a; }

    void mostrarInfo() {
        cout << "Animal: " << nombre << ", Especie: " << especie << ", Edad: " << edad << " años" << endl;
    }

    void hacerSonido() {
        if (especie == "Perro") cout << nombre << " dice: Guau!" << endl;
        else if (especie == "Gato") cout << nombre << " dice: Miau!" << endl;
        else cout << nombre << " hace un sonido desconocido" << endl;
    }
};
