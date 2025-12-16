#include<iostream>
using namespace std;

class Punto {
    int x, y;
public:
    Punto();
    Punto(int px,int py);
    void imprimir();
};

Punto::Punto()
{
    x = 0;
    y = 0;
}

Punto::Punto(int px, int py)
{
    x = px;
    y = py;
}

void Punto::imprimir()
{
    cout<<"Punto: ("<<x<<", "<<y<<")\n";
}

int main()
{
    Punto p1;
    Punto p2(10, 20);

    p1.imprimir();
    p2.imprimir();
    return 0;
}
