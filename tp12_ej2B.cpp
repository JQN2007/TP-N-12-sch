#include<iostream>
using namespace std;

class Persona {
    string nombre;
    int edad;
public:
    Persona();
    void imprimir();
    void mayorEdad();
};

Persona::Persona()
{
    cout<<"Ingrese nombre: ";
    cin>>nombre;
    cout<<"Ingrese edad: ";
    cin>>edad;
}

void Persona::imprimir()
{
    cout<<"Nombre: "<<nombre<<"  Edad: "<<edad<<"\n";
}

void Persona::mayorEdad()
{
    if(edad >= 18)
        cout<<"Es mayor de edad.\n";
    else
        cout<<"No es mayor de edad.\n";
}

int main()
{
    Persona p1;
    p1.imprimir();
    p1.mayorEdad();
    return 0;
}
