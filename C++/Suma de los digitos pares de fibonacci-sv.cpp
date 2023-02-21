/*Sumar los números pares de la serie fibonacci
que no exeda el número cuatro millones, sin verificar que cada numero es par*/
#include <iostream>
int main (int argc, char *argv[])
{
	long int limite=4000000;
	long int suma=0;
	int a=1,b=1,c=0;
	c=a+b;
	while(c<limite)
	{
		suma=suma+c;
		a=b+c;
		b=c+a;
		c=a+b;
	}
	std::cout<<suma;
	return 0;
}
