/*Realice un programa, de tal manera que se construya
una solución para la jerarquía (herencia) de las clases mostrada
a continuación.
       
	   Persona
Empleado    Estudiante
			Universitario*/
#include <iostream>
#include <conio.h>
using namespace std;

// Clase base o abstracta
class Persona{
	private://atribustos 
		string nombre;
		int edad;
	public://metodos
		Persona(string,int);
		void mostrarP();
};

class Estudiante : public Persona{ //Clase derivada 
	private://atribustos
		string codigo;
		float notaMedia;
	public://metodos
		Estudiante(string,int,string,float);
		void mostrarE();
};

class Universitario : public Estudiante{ //Clase derivada 
	private://atribustos
		string carrera;
	public://metodos
		Universitario(string,int,string,float,string);
		void mostrarU();
};

class Empleado : public Persona{ //Clase derivada 
	private://atribustos
		string empleo;
		float sueldo;
	public://metodos
		Empleado(string,int,string,float);
		void mostrarEM();
};
//Constructores de los atributos de las clase base y derivadas
Persona::Persona(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

Estudiante::Estudiante(string _nombre, int _edad, string _codigo, float _notaMedia) : Persona(_nombre, _edad) {
	codigo = _codigo;
	notaMedia = _notaMedia;
}

Universitario::Universitario(string _nombre, int _edad, string _codigo, float _notaMedia, string _carrera) : Estudiante(_nombre, _edad, _codigo, _notaMedia) {
	carrera = _carrera;
}

Empleado::Empleado(string _nombre, int _edad, string _empleo, float _sueldo) : Persona(_nombre, _edad) {
	empleo = _empleo;
	sueldo = _sueldo;
}
//constructores para los metodos
void Persona::mostrarP() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Estudiante::mostrarE() {
	mostrarP();
	cout << "Codigo: " << codigo << endl;
	cout << "Nota Media: " << notaMedia << endl;
}

void Universitario::mostrarU() {
	mostrarE();
	cout << "Carrera: " << carrera << endl;
}

void Empleado::mostrarEM() {
	mostrarP();
	cout << "Empleo: " << empleo << endl;
	cout << "Sueldo: " << sueldo << "$" << endl;
}

//función principal, Es la porción ejecutable de nuestro objeto en C++
int main() {
	cout<<"PROGRAMA QUE MUESTRA LA HERENCIA DE LA CLASE 'PERSONA',"<<endl;cout<<endl;
	cout<<"CON SUS SUBCLASES 'EMPLEADO' Y 'ESTUDIANTE UNIVERISTARIO'."<<endl;cout<<endl;
    //creación de objeto 1 + los parametros de nuestro objeto
	Universitario uni1("Pepico Parker",25,"76G2",7.3,"Arquitectura");//creación de objeto 1 + los parametros de nuestro objeto
    //creación de objeto 1 + los parametros de nuestro objeto
	Empleado emp1("Juan Julian",46,"Jardinero",900);
	
	uni1.mostrarU();//objeto creado + el metodo 
	cout << endl;
	emp1.mostrarEM();//objeto creado + el metodo 
	
	cout << "\nPresione cualquier tecla para salir del programa." << endl;
	getch();//se usa para que no se cierre la consola.
	return 0;
}


