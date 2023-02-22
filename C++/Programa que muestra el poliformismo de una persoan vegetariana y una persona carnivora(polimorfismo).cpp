//polimorfismo
/*Programa que muestra el poliformismo de una persoan vegetariana y una persona carnivora*/
#include<iostream>
#include<stdlib.h>

using namespace std;

class Personavegetariana{ //clase base 
	private://atributos
	string nombre;
	int edad;
	public://metodos
		Personavegetariana(string,int); //definición del constructor 
		virtual void mostrar(); //virtual funcion de polimorfismo va en la funcion padre
};

class Personacarnivora: public Personavegetariana{//clase derivada
	private://atributo clase derivada
		int estracto;
	public://metodo clase derivada
	    Personacarnivora(string,int,int);//definición del constructor 
	    void mostrar();	
};
//constructor de atributos clase base
Personavegetariana::Personavegetariana(string _nombre,int _edad){ 
    nombre = _nombre;
    edad = _edad;
}
//constructor de metodos clase base
void Personavegetariana::mostrar(){
	cout<<"nombre: "<<nombre<<endl;
	cout<<"edad: "<<edad<<endl;
}
//constructor de atributos de clase derivada + constructor de la clase base
Personacarnivora::Personacarnivora(string _nombre,int _edad,int _estracto): Personavegetariana(_nombre,_edad){
   estracto = _estracto;}

//constructor de metodos de la clase derivada
void Personacarnivora::mostrar(){
	Personavegetariana::mostrar();//estamos diciedo que el en programa ya hay un mostrar
	cout<<"estracto: "<<estracto<<endl;
}

int main(){
	//creación de objeto + puntero  
	Personavegetariana *vector [2]; //Punteros
	//creación del objeto usando "vector"
	vector[0] = new Personacarnivora("carlos",25,2); 
	vector[1] = new Personavegetariana("marcos",58);
	//vector + metodo
	vector[0] ->mostrar();    
	cout<<"\n";//salto de linea
	vector[1] ->mostrar(); 
	
	system("pause");
	return 0;
}
