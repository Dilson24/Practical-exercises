//construccion

#include<iostream>
#include<stdlib.h>

using namespace std;

class Fecha{
	private:
		int dia,mes,anio;
	public:
		Fecha(int,int,int);  //constructor1
		Fecha(int);//constructor2
		void mostrarfecha();
};
//constructor 1
Fecha::Fecha(int _dia,int _mes,int _anio){
	anio  = _anio;
	mes = _mes;
	dia = _dia;
}
// constructor dos por si quiere la fecha de largo ej:20210623
Fecha::Fecha(int fecha){
	anio = int(fecha/10000);   //extraer el año
	mes = int((fecha-anio*10000)/100);  //extraer el mes
	dia = int(fecha-anio*10000-mes*100);//extraer el dia
}
//constructor para inicializar los metodos que va tener nuestra clase
void Fecha::mostrarfecha(){
	cout<<"La fecha de hoy es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}
//función principal, Es la porción ejecutable de nuestro objeto en C++
int main(){
	
	cout<<"<----PROGRAMA QUE MUESTRA LA FECHA CON SU CLASE Y CONSTRUCTOR--->"<<endl;cout<<endl;
	//creación del objeto + el parametro
	Fecha hoy(15,03,2021);
	Fecha ayer(20210623);
	//objeto + el metodo
	hoy.mostrarfecha();
	ayer.mostrarfecha();
	system("pause");
	return 0;
}
