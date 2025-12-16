#include<iostream>
#include<cstring>
using namespace std;

class Socio {
    char nombre[40];
    int antiguedad;
public:
    Socio();
    int getAntiguedad();
    const char* getNombre();
};

Socio::Socio()
{
    cout<<"Ingrese nombre del socio: ";
    cin>>nombre;
    cout<<"Ingrese antiguedad (anios): ";
    cin>>antiguedad;
}

int Socio::getAntiguedad()
{
    return antiguedad;
}

const char* Socio::getNombre()
{
    return nombre;
}

class Club {
    Socio s1, s2, s3;
public:
    void mayorAntiguedad();
};

void Club::mayorAntiguedad()
{
    Socio* mayor = &s1;

    if(s2.getAntiguedad() > mayor->getAntiguedad())
        mayor = &s2;

    if(s3.getAntiguedad() > mayor->getAntiguedad())
        mayor = &s3;

    cout<<"El socio con mayor antiguedad es: "<<mayor->getNombre()
        <<" ("<<mayor->getAntiguedad()<<" anios)\n";
}

int main()
{
    Club club1;
    club1.mayorAntiguedad();
    return 0;
}
