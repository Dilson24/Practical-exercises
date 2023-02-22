#include<iostream>

using namespace std;

class jefe{
	private:
       char nombre[10];
       char apellido[10];
       char sexo[10];
       int codigo;
    public:
       void funcion();
};

void jefe::funcion(){
	
	    cout<<"Ingresa Tu Nombre: ";cin>>nombre;
        cout<<"Ingresa Tu Apellido: ";cin>>apellido;
        cout<<"Ingresa Tu Sexo: ";cin>>sexo;
        cout<<"Ingresa codigo de Verificacion: ";cin>>codigo;
        cout<<endl;
        cout<<"\n El sistema a analizado los datos "<<endl;
        cout<<"bienvenido Jefe "<<nombre<<endl;
        cout<<" "<<endl;
        cout<<"Codigo correcto: "<<codigo<<endl;
        cout<<"Sexo: "<<sexo<<endl;
};

int main(){
	
	jefe diana;
	
	diana.funcion();
	
	
	
	return 0;
}
