/*Es el ejerccios del perimetro y area*/


#include<iostream>
#include<stdlib.h>

using namespace std;

class pedido{
	
protected: //atributos 
	int codigo;
	string direccion,nombre_titular;
	float peso_pk;
public: //metodos
	pedido (int,string,float,string); //declaracion del constructor 
	void datos_del_envio ();  
};

pedido::pedido (int _codigo,string _direccion,float _peso_pk,string _nombre_titular){  //constructor
	
	codigo = _codigo;
	direccion = _direccion;
	peso_pk = _peso_pk;
	nombre_titular = _nombre_titular;
};

void pedido::datos_del_envio(){   //inicializacion del metodo
	cout<<"codigo del pedido >"<<codigo<<endl;
	cout<<"direccion del envio >"<<direccion<<endl;
	cout<<"peso en kilos del paquete >"<<peso_pk<<endl;
	cout<<"nombre de la persona que realiza el pedido >"<<nombre_titular<<endl;
}

class conductor: public pedido{
	
	private:
		string nombreC;
		int codigo_in;
		string placa;
		int telefono;
	public:
		conductor(int,string ,float,string ,string, int,string,int);
		void datosConductor();
		void envioAsignado();
};

conductor::conductor(int _codigo,string _direccion,float _peso_pk,string _nombre_titular,string _nombre,
  int _codigo_in,string _placa,int _telefono):pedido(_codigo, _direccion, _peso_pk, _nombre_titular){
	
	nombreC = _nombre;
	codigo_in = _codigo_in;
	placa = _placa;
	telefono = _telefono;
}

void conductor::datosConductor(){
	cout<<"el nombre del conductor asignado es: "<<nombreC<<endl;
	cout<<"El codigo interno del conductor es: "<<codigo<<endl;
	cout<<"La placa del vehiculo es: "<<placa<<endl;
	cout<<"El numero de telefono del conductor es: "<<telefono<<endl;
}

void conductor::envioAsignado(){
	
	datos_del_envio();
	cout<<endl;
	conductor::datosConductor();
	
};

int main(){
	
	pedido pedido1 (121212,"cll54sur#04-03",20,"Juan Galarsa");
	conductor conduc1 (121212,"cll54sur#04-03",20,"Juan Galarsa","cain Gomes",545454,"TJO324G",3426453765);
	
	conduc1.envioAsignado();
   
return 0;
}
