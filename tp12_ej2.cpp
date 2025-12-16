#include<iostream>
using namespace std;

class Vector {
    int vec[5];
public:
    Vector();
    void imprimir();
    void imprimir(int hasta);
    void imprimir(int desde,int hasta);
};

Vector::Vector()
{
    cout<<"Ingrese 5 valores:\n";
    for(int i=0; i<5; i++)
        cin>>vec[i];
}

void Vector::imprimir()
{
    cout<<"Vector completo: ";
    for(int i=0; i<5; i++)
        cout<<vec[i]<<" ";
    cout<<"\n";
}

void Vector::imprimir(int hasta)
{
    cout<<"Vector desde 0 hasta "<<hasta<<": ";
    for(int i=0; i<=hasta && i<5; i++)
        cout<<vec[i]<<" ";
    cout<<"\n";
}

void Vector::imprimir(int desde,int hasta)
{
    cout<<"Vector desde "<<desde<<" hasta "<<hasta<<": ";
    for(int i=desde; i<=hasta && i<5; i++)
        cout<<vec[i]<<" ";
    cout<<"\n";
}

int main()
{
    Vector v1;
    v1.imprimir();
    v1.imprimir(2);
    v1.imprimir(1,3);
    return 0;
}
