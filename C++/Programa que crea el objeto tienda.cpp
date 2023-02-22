// ejemplo 2 de objeto 
#include<iostream>
#include<stdlib.h>

using namespace std;

	//clase
class Tienda{
	private: //atributos       //encapsulados osea privados
	       int cantidadbodega;
	       string nombretienda;
	       string nombre;
	public: //metodos
	       Tienda(int,string,string); 
	       void almacen();
		   void cerrar();
		   void abrir(); 
};
//constructor, nos sirve para inicializar los atributos
 Tienda::Tienda(int _cantidadbodega, string _nombretienda, string _nombre){
	cantidadbodega = _cantidadbodega;
	nombretienda = _nombretienda;
	nombre = _nombre;
}

//constructor para inicializar los metodos que va tener nuestra clase
void Tienda::almacen(){
	cout<< "Mi tienda " <<nombretienda<< " tiene en la bodega "<<cantidadbodega<<" canastas" <<endl;
}

void Tienda::cerrar(){
	cout<< "Mi Tienda " <<nombretienda<< " cierra a las 5 de la tarde y el tendero se llama " << nombre <<endl;}
	

void Tienda::abrir(){
	cout<< "Mi Tienda " <<nombretienda<< " abre a las 5 " <<endl;}	
	
	
	
//función principal, Es la porción ejecutable de nuestro objeto en C++
	
int main(){
         Tienda t1 = Tienda (48, "las gorditas","carlos");//creación del objeto 1
         Tienda t2 (598, "coco","pepe");//creación del objeto 2
         t1.cerrar ();//objeto creado + los metodos de nuestro objeto
         t2.cerrar();//objeto creado + los metodos de nuestro objeto
         t2.almacen();//objeto creado + los metodos de nuestro objeto
		 
	
    return 0;
	}
