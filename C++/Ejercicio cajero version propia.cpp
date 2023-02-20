#include<iostream>

/*Programa que simule un cajero automático con un
saldo inicial de $10000.*/

using namespace std;

int main(){
	int saldo_inicial  = 10000,opc;
	float  extra,saldo = 0,retiro;
	
	cout<<"<----------Bienvenido a su cajero automatico--------->"<<endl;
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Consultar saldo"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Opcion:  ";
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"\nCuanto dinero desea ingresar en cuenta:  ";
				cin>>extra;
				
				saldo= saldo_inicial + extra;
				cout<<"\nDinero en cuenta:  "<<saldo; break;
				
		case 2: cout<<"\nCuanto dinero desea retirar:  ";
				cin>>retiro;
				
				if(retiro > saldo_inicial){
					cout<<"No cuenta con esa cantidad";
				}
				else{
					saldo = saldo_inicial - retiro;
					cout<<"\nDinero en cuenta:  "<<saldo; break;
				}
		case 3: cout<<"Su saldo es de "<<saldo_inicial<<endl; break;
 		case 4: cout<<"\tHasta luego, vuelva pronto"; break;
		default: cout<<"Se equivoco de opcion de menu";break;	 	
	}
	return 0;
}

