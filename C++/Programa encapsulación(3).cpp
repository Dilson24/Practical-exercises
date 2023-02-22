// encapsulacion 3

// encapsulaciòn

#include<iostream>
#include<stdlib.h>
using namespace std;

class Estudiante{
	private:
	 		 int celular;
			 string nombre;	//encapsulados osea de forma privada nadie aparte de la clase puede tomar los atributos
			 int edad;
			 string dondevive;
	public: 
	         Estudiante();  //constructor
			 void setEstudiante(int,string,int,string);    //set establecer valores 
		     int getEstudiantecelular();   //get mostrar informacion encapsulada
			 string getEstudiantenombre();
			 int getEstudianteedad();
			 string getEstudiantedondevive();
};
//constructor
Estudiante::Estudiante(){
}
	void Estudiante::setEstudiante(int _celular,string _nombre,int _edad,string _dondevive){
	celular=_celular;
	nombre = _nombre;
	edad = _edad;
	dondevive = _dondevive;
}

int Estudiante::getEstudiantecelular(){	//para poder dar valores a los atributos
	return celular;
}

string Estudiante::getEstudiantenombre(){
	return nombre;
}

int Estudiante::getEstudianteedad(){
return edad;
}

string Estudiante::getEstudiantedondevive(){
	return dondevive;
}
//función principal, Es la porción ejecutable de nuestro objeto en C++
int main(){
		//objetos
	Estudiante e1;//creación de nuestro objeto 1
    Estudiante e2;//creación de nuestro objeto 2
	//objetos creados+los metodos de nuestro objeto+los parametros de nuestro objeto
	e1.setEstudiante(32846034,"Sara",28,"soacha");
	e2.setEstudiante(539934,"Pedro",45,"san miguel");
	//salida de nuestros objetos
	cout<<"El nombre es: "<<e1.getEstudiantenombre()<<endl;
	cout<<"El numero celular del estudiante es: "<<e1.getEstudiantecelular()<<endl;
	cout<<endl;
	cout<<"El nombre es: "<<e2.getEstudiantenombre()<<endl;
	cout<<"El estudiante vive en: "<<e2.getEstudiantedondevive()<<endl;
	        
 system("pause");
 return 0;
 }
