#include<iostream>
#include<math.h>

/*Hace un menú que considere las siguientes opciones: 1. Cubo de un
número, 2. Número par o impar, 3. Salir.*/

using namespace std;

int main(){
	
	cout<<"PROGRAMA QUE CALCULA EL CUBO DE UN NUMERO O SI ES PAR O IMPAR."<<endl;cout<<endl;
	
	int numero,opc, cubo;
	
	cout<<"\n----Menu------"<<endl;
	cout<<"\n<<Bienvenido al menu>>,Por favor, escoga una opcion."<<endl;
	cout<<"1. Cubo de un numero."<<endl;
	cout<<"2. Numero par o impar."<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion:  ";
	cin>>opc;
		
	switch(opc){
		case 1: cout<<"\nDigite un numero:  ";
				cin>>numero;
				
				cubo= pow(numero,3);
				cout<<"\nEl cubo del numero es:  "<<cubo; break;
				
		case 2: cout<<"\nDigite un numero:  ";
				cin>>numero;
				
				if(numero==0){
		        cout<<"El numero es neutro";
	            }
	            else if(numero%2==0){
		        cout<<"El numoero es par";
	            }
	            else{
		        cout<<"El numero es impar";
	            }
		case 3: break;
		default: cout<<"Se equivoco de opcion de menu";break;	 	
	}
	return 0;
}
