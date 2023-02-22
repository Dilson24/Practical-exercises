#include<iostream>

using namespace std;

class pez {
	
 private:  //atrivutos 
	string nombre;
	int codigo;
	float tamano;
 public:  //metodos
 	pez (string,int,float,string);  //declaracion del constructor
 	void mostrar();
	string comida;
};

pez::pez(string _nombre, int _codigo, float _tamano,string _comida){   //inicializacion del constructor 
	
	nombre = _nombre;
	codigo = _codigo;
	tamano = _tamano;
	comida = _comida;
}

void pez::mostrar(){   //inicializacion del metodo
	cout<<"El nombre de tu pez es: "<<nombre<<endl;
	cout<<"El codigo que has asignado a tu pez es : "<<codigo<<endl;
	cout<<"El promedio de tamaño de tu pez es: "<<tamano<<endl;
	cout<<"La comida preferida de tu pez es : "<<comida<<endl;
}

int main(){
	
	pez p1z ("tiburon",32673267,3.7,"todo tipo de peces"); //creacion de la instancia con todas las variables parametrizadas
	
	p1z.mostrar(); 
	
	
	return 0;
}
