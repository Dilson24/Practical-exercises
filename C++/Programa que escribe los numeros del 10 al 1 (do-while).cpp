#include<iostream>
#include<stdlib.h>

/*Hacer un programa que
escriba los números de 10 al 1*/

using namespace std;

int main (){
	cout<<"PROGRAMA QUE ESCRIBE LOS NUMEROS 10 AL 1"<<endl;cout<<endl;
    int i;
	
	i = 10;
	
	do{
		cout<<i<<endl; 
		i--;//decremento el iterador de uno en uno
	}while(i>=1);
	
	system("pause");
	return 0;
}
