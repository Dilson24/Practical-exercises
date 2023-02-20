#include<iostream>

/*Declarar una varibale de tipo entero,
se le pedirá al usuario que digite un número entre 1 y 5 
y se guardará en a variable número,mostrar el número.*/

using namespace std;

int main (){
	cout<<"---PROGRAMA QUE IDENTIFICA SI UN NUMERO ESTA EN EL RANGO [1-5]---"<<endl;cout<<endl;

	int numero;
	
	cout<<"Digite un numero entre 1-5:   ";
	cin>>numero;
	
	switch(numero){
		case 1: cout<<"Es el numero 1"; break;
		case 2: cout<<"Es el numero 2"; break;
		case 3: cout<<"Es el numero 3"; break;
		case 4: cout<<"Es el numero 4"; break;
		case 5: cout<<"Es el numero 5"; break;
		default: cout<<"No esta en el rango de 1-5";break;
	}
}
