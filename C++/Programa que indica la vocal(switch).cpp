#include<iostream>

/*Programa que lea de la entrada un car�cter 
e indique en la salida est�ndar si el car�cter 
es una vocal min�scula, may�scula o no.*/

using namespace std;

int main(){
	
	cout<<"PROGRAMA LEE UN CARACTER E INDICA EN LA SALIDA ESTANDAR SI"<<endl;cout<<endl;
	cout<<"EL CARACTER ES UNA VOCAL MINISCULA, MAYUSCULA O NO. "<<endl;cout<<endl;
	
	char letra;
	cout<<("Digite un caracter:");
	cin>>letra;
	switch(letra){
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':cout<<("Es una vocal minuscula");break;
		case'A':
		case'E':
		case'I':
		case'O':
		case'U':cout<<("Es una vocal mayuscula");break;
		default:cout<<("No es una vocal ni mayuscula ni minuscula");break;		
	}
	return 0;
	
}
