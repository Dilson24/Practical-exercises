#include <iostream>
#include<stdlib.h>

using namespace  std;

class animal {
	private: //atributos
	   string nombre;
	   int edad;
	public: //metodos
	   animal(string,int,string);//contructor 
	   virtual void mostrar();
	  string comen;

	   
};
//constructor de la clase persona
animal::animal(string _nombre,int _edad,string _comen){
	nombre = _nombre;
	edad = _edad;
	comen = _comen;
}

void animal::mostrar(){
	cout<<"nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
	cout<<"comen: "<<comen<<endl;
}


class carnivoros: public animal{
    private: //atributos
	   	string peso;
	   	int N_patas;
	public:
		carnivoros(string,int,string,string,int); //constructor de la clase alumno
		void mostrar();
		
		
};

//constructor de la clase alumno
carnivoros::carnivoros(string _nombre,int _edad,string _comen,string _peso,int _N_patas) : animal(_nombre, _edad,_comen){
	peso = _peso;
	N_patas = _N_patas;
}

void carnivoros::mostrar(){
	animal::mostrar();
	cout<<"peso: "<<peso<<endl;
	cout<<"numero de patas: "<<N_patas<<endl;
}

class herbivoros: public animal{
	private: //atributos
	   string peso;
	   string velocidad;
	public: //metodos
		herbivoros(string,int,string,string,string); //constructor de la clase profesor 
		void mostrar();
};

herbivoros::herbivoros(string _nombre,int _edad,string _comen,string _peso,string _velocidad): animal (_nombre, _edad,_comen ){
	
	peso = _peso;
	velocidad = _velocidad;
}

void herbivoros::mostrar(){
	animal::mostrar();
	cout<<"peso"<<peso<<endl;
	cout<<"velocidad: "<<velocidad<<endl;
}


int main(){
	
	animal *vector[4];
	
	vector [0]= new carnivoros ("tigre",20,"caarne","100kg",4);
	vector [1] = new carnivoros ("leopardo",17,"carne","90kg",4);
	vector [2] = new herbivoros("vaca",19,"plantas","133kg","30 K/h");
	vector [3] = new herbivoros("koala",98,"plantas","20kg","10 K/h");

	
	vector [0]-> mostrar();
	cout<<"\n";
	vector [1]-> mostrar();
	cout<<"\n";
	vector [2]-> mostrar();
	cout<<"\n";
	vector [3]-> mostrar();
	
	system ("pause");
return 0;

}
