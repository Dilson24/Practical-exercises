// encapsulaciòn

#include<iostream>
#include<stdlib.h>
using namespace std;

class punto{
	private:
		int x,y;      //encapsulados
		public:
			punto();
			void setpunto(int,int);    //establecer valores 
		    int getpuntox();   //get mostrar informacion encapsulada
			int getpuntoy();
};
//constructor
punto::punto(){
	}
void punto::setpunto(int _x, int _y){
	x = _x;
	y = _y;
}
int punto::getpuntox(){      //valores a los atributos
	return x;
}
int punto::getpuntoy(){
	return y;
}

int main(){
	punto p1;//creación del objeto 
	
	p1.setpunto(15,16);//objeto creado + los metodos de nuestro objeto
	//salida de nuestro objeto
    cout<<p1.getpuntox()<<endl;
	cout<<p1.getpuntoy()<<endl;

 system("pause");
 return 0;
 }
