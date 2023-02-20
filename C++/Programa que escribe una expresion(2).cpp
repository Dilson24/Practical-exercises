#include<iostream>
//Programa que muestra la expreción "a+(b/c)/d+(e/f)"

using namespace std;
int main (){
	cout<<"--PROGRAMA QUE MUESTRA LA EXPRECION a+(b/c)/d+(e/f)--"<<endl;cout<<endl;
	float a, b, c, d, e,f, resultado;
	
	cout<<"Digite el valor de a:  "; cin>>a;
	cout<<"Digite el valor de b:  "; cin>>b;
	cout<<"Digite el valor de c:  "; cin>>c;
	cout<<"Digite el valor de d:  "; cin>>d;
	cout<<"Digite el valor de e:  "; cin>>e;
	cout<<"Digite el valor de f:  "; cin>>f;
	
	resultado = a+(b/c)/d+(e/f);
	cout.precision(2);
	cout<<"\nEl resultado es:  "<<resultado<<endl;
	
	return 0;
}
