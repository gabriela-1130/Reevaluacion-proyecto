#include <iostream>
#include <string>
using namespace std;

class Voluntario {
private:
    string nombre;
    int horas;

public:
    Voluntario(string n, int h) : nombre(n), horas(h) {}

    string getNombre() { return nombre; }
    int getHoras() { return horas; }

    void setNombre(string n) { nombre = n; }
    void setHoras(int h) { horas = h; }

    void mostrarInfo() {
        cout << "Voluntario: " << nombre << ", Horas semanales: " << horas << endl;
    }

    void registrarActividad() {
        cout << nombre << " está cuidando animales en el refugio." << endl;
    }
};
