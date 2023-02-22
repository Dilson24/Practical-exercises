/*Confeccionar una clase Persona que tenga como atributos el nombre y la edad. 
Definir como responsabilidades un método que cargue los datos personales y otro que los imprima.
Plantear una segunda clase Empleado que herede de la clase Persona. 
Añadir un atributo sueldo y los métodos de cargar el sueldo e imprimir su sueldo.
Definir un objeto de la clase Persona y llamar a sus métodos. 
También crear un objeto de la clase Empleado y llamar a sus métodos.*/

#include<iostream>

using namespace std;

class Persona { //clase base
protected:
    char nombre[40];
    int edad;
public:
    void cargarDatosPersonales();
    void imprimirDatosPersonales();
};

class Empleado : public Persona {//clase derivada
private:
    float sueldo;
public:
    void cargarSueldo();
    void imprimirSueldo();
};

//constructores para los metodos de la clase base
void Persona::cargarDatosPersonales()
{
    cout << "Ingrese nombre:";
    cin.getline(nombre, 40);
    cout << "Ingrese edad:";
    cin >> edad;
    cin.get();
}

void Persona::imprimirDatosPersonales()
{
    cout << "Nombre:"<<nombre<<"\n";
    cout << "Edad:" << edad << "\n";
}

//constructores para los metodos de la clase derivada
void Empleado::cargarSueldo()
{
    cout << "Ingrese sueldo:";
    cin >> sueldo;
}

void Empleado::imprimirSueldo()
{
    cout << "Sueldo:" << sueldo << "\n";
}

//función principal, Es la porción ejecutable de nuestro objeto en C++
int main()
{
	cout<<"<---PROGRAMA QUE MUESTRA LA HERENCIA DE LA CLASE 'PERSONA'---->"<<endl;cout<<endl;
	//creacion del objeto base
    Persona persona1;
    //objeto creado + metodos
    persona1.cargarDatosPersonales();
    persona1.imprimirDatosPersonales();
 
    //creación del objeto derivado
    Empleado empleado1;
    //objeto creado + metodos
    empleado1.cargarDatosPersonales();
    empleado1.cargarSueldo();
    empleado1.imprimirDatosPersonales();
    empleado1.imprimirSueldo();
    return 0;
}
