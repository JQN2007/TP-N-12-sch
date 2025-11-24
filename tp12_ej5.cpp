#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;

public:
    void cargarDatos() {
        cout << "Nombre: ";
        cin >> nombre;
        cout << "Edad: ";
        cin >> edad;
    }

    void imprimirDatos() {
        cout << "Nombre: " << nombre << " - Edad: " << edad << endl;
    }
};

class Empleado : public Persona {
private:
    float sueldo;

public:
    void cargarSueldo() {
        cout << "Sueldo: ";
        cin >> sueldo;
    }

    void imprimirSueldo() {
        cout << "Sueldo: " << sueldo << endl;
    }
};

int main() {
    Persona p1;
    cout << "\nCargar persona:\n";
    p1.cargarDatos();
    p1.imprimirDatos();

    Empleado e1;
    cout << "\nCargar empleado:\n";
    e1.cargarDatos();
    e1.cargarSueldo();

    cout << "\nDatos del empleado:\n";
    e1.imprimirDatos();
    e1.imprimirSueldo();

    return 0;
}

