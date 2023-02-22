/*Programa que calcula el sueldo 
por horas trabajadas, que tambien 
incrementa el sueldo apartir de 
las 40 horas trabajas.*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int salario,horas,a=12000,b=17000,c=22000,thextra,HExtra,TE,TES,opc;
char nombre[60];


cout<<"<<<<<<<Bienvenidos a su calculadora de salario>>>>>>>"<<endl;cout<<endl;
cout<<"\tPOR FAVOR ELIJA UNA OPCION\n"<<endl;
    cout<<"\t1. Categoria uno:12000"<<endl;
	cout<<"\t2. Categoria dos:17000"<<endl;
	cout<<"\t3. Categoria tres:22000"<<endl;
	cout<<"\t4. Salir"<<endl;
	cout<<"\nOpcion:  ";
	cin>>opc;

switch(opc){
		case 1:
		        cout<<"\nIngrese su nombre:  ";cin>>nombre; 
		        cout<<"\nPor favor ingrese numero de horas trabajadas:  ";
				cin>>horas;
				cout<<"\n"<<endl;
				if(horas <=40){
				salario=a*horas;
				cout<<"\t"<<nombre;
				cout<<"\nTotal horas trabajadas:  "<<horas;
			    cout<<"\nTotal salario:  "<<salario;
			    return 0;
				}
				else{
				HExtra=25*a/100;
				thextra=horas-40;
				TE=thextra*HExtra;
				TES=a*horas+TE;
				salario=a*horas;
				
				cout<<"\t"<<nombre;
				cout<<"\nTotal horas trabajadas:  "<<horas;
				cout<<"\nHoras extras trabajadas:  "<<thextra;
				cout<<"\nIncremento por cada hora extra:  "<<HExtra;
				cout<<"\nTotal horas extras:  "<<TE;
			    cout<<"\nTotal salario:  "<<salario;
			    cout<<"\nTotal salario + horas extras:  "<<TES;
				return 0;
				}
				
    	case 2: cout<<"\nIngrese su nombre:  ";cin>>nombre; 
		        cout<<"\nPor favor ingrese numero de horas trabajadas:  ";
				cin>>horas;
				cout<<"\n"<<endl;
				if(horas <=40){
				salario=b*horas;
				cout<<"\t"<<nombre;
				cout<<"\nTotal horas trabajadas:  "<<horas;
			    cout<<"\nTotal salario:  "<<salario;
			    return 0;
				}
				else{
				HExtra=25*b/100;
				thextra=horas-40;
				TE=thextra*HExtra;
				TES=b*horas+TE;
				salario=b*horas;
				
				
				cout<<"\t"<<nombre;
				cout<<"\nTotal horas trabajadas:  "<<horas;
				cout<<"\nHoras extras trabajadas:  "<<thextra;
				cout<<"\nIncremento por cada hora extra:  "<<HExtra;
				cout<<"\nTotal horas extras:  "<<TE;
			    cout<<"\nTotal salario:  "<<salario;
			    cout<<"\nTotal salario + horas extras:  "<<TES;
				return 0;
				}
        case 3:  cout<<"\nIngrese su nombre:  ";cin>>nombre; 
		        cout<<"\nPor favor ingrese numero de horas trabajadas:  ";
				cin>>horas;
				cout<<"\n"<<endl;
				if(horas <=40){
				salario=c*horas;
				cout<<"\t"<<nombre;
				cout<<"\nTotal horas trabajadas:  "<<horas;
			    cout<<"\nTotal salario:  "<<salario;
			    return 0;
				}
				else{
				HExtra=25*c/100;
				thextra=horas-40;
				TE=thextra*HExtra;
				TES=c*horas+TE;
				salario=c*horas;
				
				cout<<"\t"<<nombre;
				cout<<"\nTotal horas trabajadas:  "<<horas;
				cout<<"\nHoras extras trabajadas:  "<<thextra;
				cout<<"\nIncremento por cada hora extra:  "<<HExtra;
				cout<<"\nTotal horas extras:  "<<TE;
			    cout<<"\nTotal salario:  "<<salario;
			    cout<<"\nTotal salario + horas extras:  "<<TES;
				return 0;
				}
        case 4: cout<<"\tHasta luego, vuelva pronto"; break;
     	default: cout<<"Se equivoco de opcion de menu";break;	 	
	}
	system("pause");
	return 0;
}






	
	

