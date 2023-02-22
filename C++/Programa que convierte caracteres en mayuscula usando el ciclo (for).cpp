/*Programa que convierte caracteres en mayuscula usando el ciclo (for)*/
#include <iostream>
using namespace std;

#include <cctype> //toupper()

int main(void){
	char nombre[60];

	cout<<"Ingrese un nombre: ";
	cin.getline(nombre, 60, '\n');

	//char letra[]= {72, 73, 33, '\0'}; //HI!

	for (int i=0; nombre[i]!='\0'; i++){

		nombre[i]= toupper(nombre[i]);
	}

	cout<<nombre<<endl;

	return 0;
}
