#include<iostream>

using namespace std;

class Operacion {
protected:
    int valor1;
    int valor2;
    int resultado;
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};
void Operacion::cargar1()
{
    cout << "Ingrese primer valor:";
    cin >> valor1;
}

void Operacion::cargar2()
{
    cout << "Ingrese segundo valor:";
    cin >> valor2;
}

void Operacion::mostrarResultado()
{
    cout <<resultado<<"\n";
}
class Suma: public Operacion{
public:
    void operar();
};
void Suma::operar()
{
    resultado = valor1 + valor2;

}
class Resta: public Operacion{
public:
	void operar();
};
void Resta ::operar()
{
	resultado= valor1-valor2;
}



int main (){
    Suma suma1;
    suma1.cargar1();
    suma1.cargar2();
    suma1.operar();
    cout << "La suma de los dos valores es:";
    suma1.mostrarResultado();

    Resta resta1;
    resta1.cargar1();
    resta1.cargar2();
    resta1.operar();
    cout << "La diferencia de los dos valores es:";
    resta1.mostrarResultado();

    cin.get();
    cin.get();
}