//ejemplo objetos

#include<iostream>
#include<stdlib.h>

using namespace std;
	//clase
class Perro{
	private: //atributos  //encapsulados osea privados
	       float peso;
	       string nombre;
	public: //metodos
	       Perro(float,string); 
	       void comer();
		   void dormir();	 
};
//constructor para inicializar los atributos que va tener nuestra clase
Perro::Perro(float _peso,string _nombre){
	peso = _peso;
	nombre = _nombre;
}
//constructor para inicializar los metodos que va tener nuestra clase
void Perro::comer(){
	cout<< "Mi perro " <<nombre<< " come muy saludable y pesa: "<<peso <<endl;
}

void Perro::dormir(){
	cout<< "Mi perro " <<nombre<< " duerme todo el dia " <<endl;}
	
	
	
//función principal, Es la porción ejecutable de nuestro objeto en C++
	
int main(){
	
         Perro p1 = Perro (20, "Toby");//creación del objeto 1
         Perro p2 = Perro (59.8, "coco");//creación del objeto 2
         p1.dormir (); //objeto creado + los metodos de nuestro objeto
         p2.comer();//objeto creado + los metodos de nuestro objeto
         p2.dormir();//objeto creado + los metodos de nuestro objeto
		 
	
     return 0;}
