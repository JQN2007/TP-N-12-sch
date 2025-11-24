#include <iostream>
using namespace std;

class Socio {
private:
    string nombre;
    int antiguedad;

public:
    Socio() {
        cout << "Nombre del socio: ";
        cin >> nombre;
        cout << "Antiguedad en años: ";
        cin >> antiguedad;
    }

    string getNombre() {
        return nombre;
    }

    int getAntiguedad() {
        return antiguedad;
    }
};

class Club {
private:
    Socio s1, s2, s3;

public:
    void socioMayorAntiguedad() {
        Socio mayor = s1;

        if (s2.getAntiguedad() > mayor.getAntiguedad()) {
            mayor = s2;
        }
        if (s3.getAntiguedad() > mayor.getAntiguedad()) {
            mayor = s3;
        }

        cout << "El socio de mayor antigüedad es: " << mayor.getNombre() << endl;
    }
};

int main() {
    Club c1;
    c1.socioMayorAntiguedad();

    return 0;
}

