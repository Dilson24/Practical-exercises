#include <iostream>

/*Escribe la siguiente expresión matemática como expresión en C++:a+(b)/(c-d)*/

using namespace std;
int main(){
cout<<"PROGRAMA QUE CALCULA LA EXPRESION A+(B) / (C-D). "<<endl;cout<<endl;	
	float a,b,c,d,resultado = 0;
	
   cout<<"DIGITE LA EXPRECION DE A+(B)/(C-D)\n";
   cout<<"Digite el valor de (a):";
   cin>>a;
   cout<<"Digite el valor de (b):";
   cin>>b;
   cout<<"Digite el valor de (c):";
   cin>>c;
   cout<<"Digite el valor de (d):";
   cin>>d;
   
   resultado = a+(b)/(c-d);
   cout.precision(3);
   
   cout<<"El resultado es:" <<resultado<<endl;
	
   return 0;	
}
