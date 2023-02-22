#include <iostream>
#include<stdlib.h>

using namespace  std;
class persona {
	private: //atributos
	   string nombre;
	   int edad;
	public: //metodos
	   persona(string,int);//contructor 
	   void mostrarpersona();
};

class Alumno: public persona{
    private: //atributos
	   	string codigoalumno;
	   	float notafinal;
	public:
		Alumno(string,int,string,float); //constructor de la clase alumno
		void mostraralumno();
};
//constructor de la clase persona
persona::persona(string _nombre,int _edad){
	nombre = _nombre;
	edad = _edad;
}
//constructor de la clase alumno
Alumno::Alumno(string _nombre,int _edad, string _codigoalumno,float _notafinal) : persona(_nombre, _edad){
	codigoalumno = _codigoalumno;
	notafinal = _notafinal;
}


void persona::mostrarpersona(){
	cout<<"nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Alumno::mostraralumno(){
	mostrarpersona();
	cout<<"codigo alumno: "<<codigoalumno<<endl;
	cout<<"nota final: "<<notafinal<<endl;
}

int main(){
	
	Alumno per1("alejandro",20,"5454545",56.7);
	
	per1.mostraralumno();
	
	system ("pause");
return 0;
}

