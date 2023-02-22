#include<iostream>

/*Mostrar los meses del año, pidiéndoles al usuario un número entre (1-12), y
mostrar el mes al que corresponde*/

using namespace std;
int main(){
	
	cout<<"PROGRAMA QUE CONVIERTE NUMEROS ENTRE (1-12) A MESES DEL AÑO"<<endl;cout<<endl;
	
	int numero;
	
	cout<<"Digite un numero entre el 1 y el 12: ";
	cin>>numero;
	
	switch(numero){
		case 1:cout<<"Es el mes de Enero"; break;
		case 2:cout<<"Es el mes de Febrero"; break;
		case 3:cout<<"Es el mes de Marzo"; break;
		case 4:cout<<"Es el mes de Abril"; break;
		case 5:cout<<"Es el mes de Mayo"; break;
		case 6:cout<<"Es el mes de Junio"; break;
		case 7:cout<<"Es el mes de Julio"; break;
		case 8:cout<<"Es el mes de Agosto"; break;
		case 9:cout<<"Es el mes de Septiembre"; break;
		case 10:cout<<"Es el mes de Octubre"; break;
		case 11:cout<<"Es el mes de Noviembre"; break;
		case 12:cout<<"Es el mes de Diciembre"; break;
		default:cout<<"No esta en el rango de 1-12"; break; 
	
	}
	return 0;
}
