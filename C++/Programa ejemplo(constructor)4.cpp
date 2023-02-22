#include<iostream>
using namespace std;
class FooClass
{
	int x, y, z;
	public:
	FooClass(); //Constructor por defecto
	void informatica();
};

FooClass::FooClass()
{
	x = 1;
	y = 2;
	z = 3;
}

void FooClass::informatica()
{
	cout<<"x: "<< x <<", y: "<< y <<", z: "<<z<<endl;
}

int main()
{
	FooClass fooObj; //Inicialización por defecto
	fooObj.informatica();
	return 0;
}

