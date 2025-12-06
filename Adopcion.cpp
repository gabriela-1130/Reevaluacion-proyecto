#include <iostream>
#include <string>
using namespace std;

class Adopcion {
private:
    string adoptante;
    string animal;

public:
    Adopcion(string a, string an) : adoptante(a), animal(an) {}

    string getAdoptante() { return adoptante; }
    string getAnimal() { return animal; }

    void setAdoptante(string a) { adoptante = a; }
    void setAnimal(string an) { animal = an; }

    void mostrarInfo() {
        cout << "Adopción: " << adoptante << " adoptó a " << animal << endl;
    }

    void aprobar() {
        cout << "La adopción de " << animal << " ha sido aprobada para " << adoptante << endl;
    }
};
