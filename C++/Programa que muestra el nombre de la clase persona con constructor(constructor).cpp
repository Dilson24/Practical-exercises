/*Programa que muestra caracteres en los objetos creados usando constructor*/

#include <iostream>

using namespace std;


class Persona{
	
	private:
		string nombre; //atributo de tipo cadena (string)
	
	public:
		Persona(){
			nombre = "sin nombre";
		}
		Persona(string _nombre){//contructor debe tener el mismo nombre la clase
		 nombre = _nombre;	
		}
		string getnombre(){ //metodo de tipo cadena
			return nombre;
		}
};

int main(){
	
	cout<<"<--PROGRAMA QUE MUESTRA EL NOMBRE DE LA CLASE PERSONA CON CONSTRUCTOR-->"<<endl;cout<<endl;
	//creaci�n del objeto+ parametro
	Persona primerapersona("Dilson");
	//creaci�n del objeto+ parametro
	Persona otrapersona("Alexander");
	//creaci�n del objeto
	Persona sinpersona;
	//salida del objeto + el metodo
	cout<< primerapersona.getnombre();
	cout<<endl;
	//salida del objeto + el metodo
	cout<<otrapersona.getnombre();
	cout<<endl;
	//salida del objeto + el metodo
	cout<< sinpersona.getnombre();
}
