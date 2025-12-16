#include<iostream>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
public:
    void cargar();
    void imprimir();
};

void Persona::cargar()
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

class Empleado : public Persona {
    float sueldo;
public:
    void cargarSueldo();
    void imprimirSueldo();
};

void Empleado::cargarSueldo()
{
    cout<<"Ingrese sueldo: ";
    cin>>sueldo;
}

void Empleado::imprimirSueldo()
{
    cout<<"Sueldo: "<<sueldo<<"\n";
}

int main()
{
    Persona p1;
    cout<<"--- Carga Persona ---\n";
    p1.cargar();
    p1.imprimir();

    Empleado e1;
    cout<<"\n--- Carga Empleado ---\n";
    e1.cargar();
    e1.cargarSueldo();
    e1.imprimir();
    e1.imprimirSueldo();
    return 0;
}
