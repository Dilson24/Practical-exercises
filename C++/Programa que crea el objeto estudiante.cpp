 //ejemplo objetos 3

#include<iostream>
#include<stdlib.h>

using namespace std;

	//clase

class Estudianteuniversidad{
	private:			// atributo
		int id;
		string nombre;
		string carrera;
		string universidad;
	public:		//metodos
		Estudianteuniversidad(int,string,string,string);//definicion del constructor
		void cancelarmatricula();
		void inscripcion();
		void consultadeinscripcion();
};
//constructor para inicializar los atributos que va tener nuestra clase
Estudianteuniversidad::Estudianteuniversidad(int _id, string _nombre, string _carrera, string _universidad){
	id = _id;
	nombre = _nombre;
	carrera = _carrera;
	universidad = _universidad;
}
//constructor para inicializar los metodos que va tener nuestra clase
void Estudianteuniversidad::cancelarmatricula(){
cout<<"La estudiante "<<nombre<<" decide a mitad de semestre cancelar la matricula"<<endl ;	
}


void Estudianteuniversidad::inscripcion(){
	cout<<"El estudiante "<<nombre<<" identificado con numero C.C "<<id<< " se inscribe en el 2021"<<endl ;
}

void Estudianteuniversidad::consultadeinscripcion(){
	cout<<"La identificacion "<<id<<" esta en la carrera de :"<<carrera<<endl;
}
//función principal, es la porción ejecutable de nuestro objeto en C++
int main(){
	     Estudianteuniversidad e1 = Estudianteuniversidad (19472782, "Marcos" ,"Diseño","Distrital");
	     cout<<endl;//creación del objeto 1
	     Estudianteuniversidad e2(72983,"Carmen","Artes","Distrital");//creación del objeto 2
	 
         e1.inscripcion();//objeto creado + los metodos de nuestro objeto
	     e2.consultadeinscripcion();//objeto creado + los metodos de nuestro objeto
	     e2.cancelarmatricula();//objeto creado + los metodos de nuestro objeto
	     
	     
	system("pause");
	return 0;
}
