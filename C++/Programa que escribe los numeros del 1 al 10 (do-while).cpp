#include<iostream>

/*Hacer un programa que
escriba los números de 1 al 10*/

using namespace std;

int main (){
	cout<<"PROGRAMA QUE ESCRIBE LOS NUMEROS 1 AL 10"<<endl;cout<<endl;
    int i;
	
	i=1;
	
	do{
		cout<<i<<endl; 
		i++;//aumneta el iterador de uno en uno
	}while(i<=10);
	
	return 0;
}
