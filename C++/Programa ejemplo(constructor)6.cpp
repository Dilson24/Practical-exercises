#include<iostream>

using namespace std;
class fooclass{
	
	int x,y,z;
	public:
		fooclass(int,int,int); //constructor parametrizado
		fooclass(const fooclass&); //constructor de copia 
		void printVars();
	
};

fooclass::fooclass(int a,int b,int c){
	
	x = a;
	y = b;
	z = c;
}

fooclass::fooclass(const fooclass& Obj){
	
	x = Obj.x;
	y = Obj.y;
	z = Obj.z;
}

void fooclass::printVars(){
	
	cout<<"x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
	
}

int main(){
	
		fooclass fooObj(10,20,30); //creamos un objeto o tambien llamada instancia de la clase
		fooclass fooCopia(fooObj); //creamos un objeto con el constructor de copia 
		fooObj.printVars(); 
	
	return 0;
}
      
