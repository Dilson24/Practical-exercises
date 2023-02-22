#include<iostream>

using namespace std;
class fooclass{
	
	int x,y,z;
	public:
		fooclass(int,int,int); //constructor parametrizado
		void printVars();
	
};

fooclass::fooclass(int a,int b,int c){
	
	x = a;
	y = b;
	z = c;
}

void fooclass::printVars(){
	
	cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
	
}

int main(){
	
		fooclass fooObj(10,20,30); //creamos un objeto o tambien llamada instancia de la clase
		fooObj.printVars(); 
	
	
	
	return 0;
}
