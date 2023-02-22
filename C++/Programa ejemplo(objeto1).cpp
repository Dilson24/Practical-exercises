#include <iostream>
using namespace std;

class Auto{
	
	private://atributos
		string Color;
		int capacidad ;
	public:
		void  agregarColor(string _Color){	Color =  _Color;	};//constructor 
		string GetColor(){	return Color;}//metodo inicializado
		void agregar_capacidad(int _capacidad){	capacidad = _capacidad;	}//constructor
		float Getcapacidad()	{	return capacidad; }//metodo inicializado
};

int main()
{ 
  Auto miAuto;
  
  miAuto.agregarColor("Blanco");
  miAuto.agregar_capacidad(5);
  
  
  cout <<miAuto.GetColor();
  cout<<endl;
  cout <<miAuto.Getcapacidad();
}















