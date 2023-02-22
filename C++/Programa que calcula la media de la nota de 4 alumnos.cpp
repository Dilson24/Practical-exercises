#include<iostream>

/*Programa que lea la nota final de 4 alumnos y calcule la nota
final media de los 4 alumnos */

using namespace std;

int main (){
	
	cout<<"PROGRAMA QUE CALCULA LA MEDIA DE 4 NOTAS FINALES"<<endl;cout<<endl;
	double nota1;
	cout<<"Ingrese la nota del 1er alumno: ";cin>>
	nota1;cout<<endl;
	double nota2;
	cout<<"Ingrese la nota del 2do alumno: ";cin>>
	nota2;cout<<endl;
	double nota3;
	cout<<"Ingrese la nota del 3ro alumno: ";cin>>
	nota3;cout<<endl;
	double nota4;
	cout<<"Ingrese la nota del 4to alumno: ";cin>>
	nota4;cout<<endl;
	
	double media = (nota1+nota2+nota3+nota4)/4;
	
	cout<<"La media de las notas de los 4 alumnos es: "<<media; 
	cout<<endl;
	
	return 0;
}
