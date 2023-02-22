#include<iostream>
#include<conio.h>

/* Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. El programa debe
entregar la suma de los valores mayores a =0 introducidos*/

using namespace std;

int main(){
	
	cout<<"PROGRAMA QUE LEE VALORES ENTEROS HASTA QUE SE INTRODUCE UN VALOR"<<endl;cout<<endl;
	cout<<"EN EL RANGO DE [20-30] O SE INTRODUZCA EL VALOR 0."<<endl;cout<<endl;
	cout<<"TAMBIEN EL PROGRAMA DEBE ENTREGAR LA SUMA DE LOS"<<endl;cout<<endl;
	cout<<"VALORES MAYORES A 0 INTRODUCIDOS."<<endl;cout<<endl;
	int numero, suma = 0;
	
	do{
		cout<<"Digite un numero: "; 
		cin>>numero; 
		
		if(numero>0){
			suma += numero;
		}
		
	}while( ((numero<20) || (numero>30)) && (numero!=0) );
	
	cout<<"\nLa suma de todos los numeros mayores a cero es: "<<suma<<endl;
	
	getch();
	return 0;
}
