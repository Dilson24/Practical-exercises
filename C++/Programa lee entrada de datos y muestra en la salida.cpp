#include<iostream>

/*Realice un programa que lea de la entrada estandar de los datos de una persona:
tipo carácter, altura en metros tipo real.Luego de leerlos debe mostrarlos en 
la salida estándar.*/

using namespace std;

int main(){
	
	cout<<"---PROGRAMA QUE LEE LA ENTRADA DE DATOS Y LOS MUESTRA EN LA SALIDA---"<<endl;cout<<endl;
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Digite su edad: "; cin>>edad;
	cout<<"Digite su sexo  "; cin>>sexo;
	cout<<"Digite su altura en metros:  "; cin>>altura;
	cout<<""<<endl;
	cout<<"Su edad es:  "<<edad<<endl;
	cout<<"Su sexo es:  "<<sexo<<endl;
	cout<<"Su altura es:  "<<altura<<endl;
	
	return 0;

}
