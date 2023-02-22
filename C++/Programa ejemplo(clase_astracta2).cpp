#include<iostream>

using namespace std;

class persona{
	
	int DNI;
	int Edad;
	string Genero;
	public:
		persona(int,int,string);
		float Altura;
		string pasatiempo;
		 void getpasatiempo();
	   void datos ();
	   void getAltura ();
};

persona::persona(int _DNI,int _Edad,string _Genero){
	
	DNI = _DNI;
	Edad= _Edad;
	Genero = _Genero;
	
};

void persona::datos (){
	
	getAltura ();
	cout<<"DNI: "<<DNI<<endl;
	cout<<"Edad: "<<Edad<<endl;
	cout<<"Genero: "<<Genero<<endl;
	
};+
void persona::getAltura ( ){
	   	cout<<"Digite su altura >";cin>>Altura;
 }


int main (){
	
	persona p1 (121121,18,"F");
	
	p1.datos();
	
	
	
	return 0;
}
