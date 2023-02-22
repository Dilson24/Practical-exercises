#include<iostream>

using namespace std;

class vehiculo{	
    public:
		virtual void decripcion ()=0;
};


class camioneta: public vehiculo{
	private: //atrubutos
		string placa;
		string tipo ;
		string color;
		int n_neumaticos ;
		int capacidad;
	public: //metodos
		camioneta (string ,string ,string ,int ,int ); //declaracion del constructor
		void decripcion ();
};
camioneta::camioneta(string _placa,string _tipo,string _color,int _n_neumaticos,int _capacidad){ //inicializacion del constructor
	placa = _placa;
	tipo = _tipo;
	color = _color;
	n_neumaticos = _n_neumaticos;
	capacidad = _capacidad;
};

void camioneta::decripcion(){ //inicializacion del metodo,funcion decripcion 
	
	cout<<"placa: "<<placa<<endl;
	cout<<"el tipo de vehiculo es: "<<tipo<<endl;
	cout<<"el color de la camionesta es: "<<color<<endl;
	cout<<"numero de neumaticos del vehiculo:  "<<n_neumaticos<<endl;
	cout<<"capacidad de pasajeros:  "<<capacidad<<endl;
	
};



int main(){

    camioneta McQueen ("HUS654L","camioneta","rojo",4,6); //creacion del objeto parametrizado 
	
	McQueen.decripcion();
	
	return 0;
}
