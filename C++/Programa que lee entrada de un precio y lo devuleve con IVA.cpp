#include<iostream>

/*Programa que lea de la entrada estándar el precio de un
producto y muestre en la salida estándar el precio del producto al aplicarle
el iva.*/

using namespace std; 

int main (){
	
	cout<<"PROGRAMA QUE CALCULA EL IVA"<<endl;cout<<endl;
	double precio;
	cout<<"Ingrese el precio a calcular el IVA: ";cin>>
	precio;cout<<endl;
	double iva=19*precio/100;
	cout<<"El IVA es:"<<iva<<endl<<endl;
	double preciomasiva= precio + iva;
	cout<<"El precio con el IVA incluido es: "<<preciomasiva;
	cout<<endl;
	
	return 0;	
}
