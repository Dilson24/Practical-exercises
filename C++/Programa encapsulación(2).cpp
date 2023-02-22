// encapsulaciòn

#include<iostream>
#include<stdlib.h>
using namespace std;

class alumno{
	private:
		int edad;
		float peso;      //encapsulados
		public:
			alumno();
			void setalumno(int,float);    //establecer o dar valores 
		    int getalumnoedad();   //get mostrar informacion encapsulada
			float getalumnopeso();
};
//constructor
alumno::alumno(){
}
void alumno::setalumno(int _edad, float _peso){
	edad= _edad;
	peso= _peso;
}
int alumno::getalumnoedad(){
	return edad;
}

float alumno::getalumnopeso(){
	return peso;
}

//función principal, Es la porción ejecutable de nuestro objeto en C++	
int main(){
	alumno a1;//creación de nuestro objeto
	//objeto creado+los metodos de nuestro objeto+los parametros de nuestro objeto
	a1.setalumno(15,16.7);
	//salida de nuestro objeto
    cout<<a1.getalumnoedad()<<endl;
	cout<<a1.getalumnopeso()<<endl;

 
         
 system("pause");
 return 0;
 }
