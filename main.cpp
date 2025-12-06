#include <iostream>
#include "Animal.cpp"
#include "Voluntario.cpp"
#include "Adopcion.cpp"
using namespace std;

int main() {
    Animal perro("Max", "Perro", 3);
    Animal gato("Luna", "Gato", 2);
    Voluntario voluntario("Andrea", 10);
    Adopcion adopcion("Carlos", "Max");

    perro.mostrarInfo();
    perro.hacerSonido();

    gato.mostrarInfo();
    gato.hacerSonido();

    voluntario.mostrarInfo();
    voluntario.registrarActividad();

    adopcion.mostrarInfo();
    adopcion.aprobar();

    cout << "Edad del perro: " << perro.getEdad() << endl;
    perro.setEdad(4);
    cout << "Nueva edad del perro: " << perro.getEdad() << endl;

    return 0;
}
