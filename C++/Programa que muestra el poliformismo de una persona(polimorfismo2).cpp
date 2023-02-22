//2º ejemplo polimorfismo

#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{//clase base 
	private://atributos
	     string nombre;
	     float numcelular;
	public://metodos 
		Persona(string,float);//definición del constructor 
		virtual void mostrar();//virtual funcion de polimorfismo va en la funcion padre
};

class Fotografo : public Persona{//clase derivada
	private: //atributos clase derivada
	   string tienecertificado;
	public:// metodos clase derivada 
	   Fotografo(string,float,string);
	   void mostrar();  
};

//constructor de atributos clase base
Persona::Persona(string _nombre,float _numcelular){
	nombre = _nombre;
	numcelular= _numcelular;
}
//constructor de metodos clase base
void Persona::mostrar(){
	cout<<" Mi nombre es: "<<nombre<<endl;
	cout<<"Mi numero es: "<<numcelular<<endl;
}
//constructor de atributos de clase derivada + constructor de la clase base
Fotografo::Fotografo(string _nombre,float _numcelular,string _tienecertificado): Persona(_nombre,_numcelular){
	tienecertificado = _tienecertificado;
}
//constructor de metodos de la clase derivada
void Fotografo::mostrar(){
	Persona::mostrar();
	cout<<"y " << tienecertificado <<" cuento con certificacion"<<endl;
}
//función principal, Es la porción ejecutable de nuestro objeto en C++
int main(){
	//creación de objeto + puntero 
	Persona *vector [2];          //Punteros
	//creación del objeto usando "vector"
	vector[0] = new Fotografo("carlos",258483,"No");
	vector[1] = new Persona("carl",849395);
	
	//puntero creado + metodo poliformico
	vector[0] ->mostrar();    
	cout<<"\n"; //salto de linea
	vector[1] ->mostrar(); 
	
		system("pause");
	return 0;
} 
