#include <iostream>
using namespace std;

class VectorEnteros {
private:
    int vec[5];

public:
    VectorEnteros() {
        cout << "Cargando vector de 5 elementos:\n";
        for (int i = 0; i < 5; i++) {
            cout << "Ingrese valor " << i+1 << ": ";
            cin >> vec[i];
        }
    }

    void imprimir() {
        cout << "Vector completo: ";
        for (int i = 0; i < 5; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int hasta) {
        cout << "Desde 0 hasta " << hasta << ": ";
        for (int i = 0; i <= hasta && i < 5; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }

    void imprimir(int desde, int hasta) {
        cout << "Rango " << desde << " a " << hasta << ": ";
        if (desde < 0) desde = 0;
        if (hasta > 4) hasta = 4;

        for (int i = desde; i <= hasta; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    VectorEnteros v1;

    v1.imprimir();
    v1.imprimir(2);
    v1.imprimir(1, 3);

    return 0;
}

