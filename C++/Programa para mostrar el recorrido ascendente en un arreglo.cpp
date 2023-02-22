/*Programa para mostrar el recorrido ascendente 
en un arreglo.*/

#include<iostream>

using namespace std;

int main(){
	
	int i, datos[5];
	
	datos [0]=6;
	datos [1]=9;
	datos [2]=14;
	datos [3]=21;
	datos [4]=29;
	
	cout<<"Recorrido ascendente:  ";
	
	cout<<"\n\n";
	
	for (int i=0; i<5; i++)
		cout<<datos[i]<<endl;
		
	return 0;
	
}
