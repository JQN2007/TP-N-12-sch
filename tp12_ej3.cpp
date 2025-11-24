#include <iostream>
using namespace std;

class Punto {
private:
    int x, y;

public:
    Punto() {
        x = 0;
        y = 0;
    }

    Punto(int a, int b) {
        x = a;
        y = b;
    }

    void imprimir() {
        cout << "Punto (" << x << ", " << y << ")\n";
    }
};

int main() {
    Punto p1;
    Punto p2(5, 8);

    p1.imprimir();
    p2.imprimir();

    return 0;
}

