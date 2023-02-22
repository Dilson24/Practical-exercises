//polimorfismo 3

#include<iostream>
#include<stdlib.h>

using namespace std;

class Biblioteca{//clase base
	private:	//atributos
	   int anios;
	   string nombre;
	public: 	//metodos
	   Biblioteca(int,string);//definición del constructor 
	   virtual void mostrar();//virtual funcion de polimorfismo va en la funcion padre
	
};

class Responsable : public Biblioteca{//clase derivada
	private: //atributo clase derivada
     	string tienehijos;
	public://metodo clase derivada
		 Responsable(int,string,string);//definición del constructor
		 	void mostrar();
};
//constructor de atributos clase base
Biblioteca::Biblioteca(int _edad, string _nombre){
	anios = _edad;
	nombre = _nombre;
}

//constructor de metodos clase base
void Biblioteca::mostrar(){
	cout<<"mi nombre es: "<<nombre << endl;
	cout<<"tengo "<<anios <<" anios"<<endl;
}
//constructor de atributos de clase derivada + constructor de la clase base
Responsable::Responsable(int _edad, string _nombre,string _tienehijos) : Biblioteca( _edad, _nombre)// nos dice que ya tenemos este dato inializado
{
	tienehijos = _tienehijos;
}
//constructor de metodos de la clase derivada
void Responsable::mostrar(){
	 Biblioteca::mostrar();
	 cout<<"Usted tiene hijos? "<<tienehijos;
}
//función principal, Es la porción ejecutable de nuestro objeto en C++
int main(){
	//creación de objeto + puntero  
	Biblioteca *vector [2];          //Punteros
	//creación del objeto usando "vector"
	vector[0] = new Biblioteca(398,"El socorro");
	vector[1] = new Responsable(30,"Pedro","si");
	
	//puntero creado + metodo poliformico
	//al no poner esto le aparece la ejecucion en blanco
	vector[0] -> mostrar();     
    cout<<"\n";//salto de linea
	vector[1] -> mostrar(); 
	
	return 0;
}

