#include<iostream>
#include <stdlib.h>

using namespace std;

class Persona{
	private:  //atrivutos
	   int edad;
	   string nombre;
	public:  //metodos
		Persona (int ,string );
		void leer ();
		void correr ();

};
Persona::Persona(int _edad,string _nombre){
 
 edad = _edad;
 nombre = _nombre;
	
}

void Persona::leer(){
	
	cout<<"soy "<<nombre<<"y estoy leyendo un libro"<<endl;
	
}

void Persona::correr(){
	cout<<"soy "<<nombre<<"Y estoy corriendo una maraton "<<endl;
}



int main(){
	
	
	int i,j,edad;
	string dec,nombre,matris[2][2];
	
	cout<<"desea igresar los datos, digite la letra (s) si, si o la (n) si no: ";cin>>dec;
	
	if(dec == "s"|| dec == "S"){
		
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				
				if(i ==0 & j == 0 ||i ==0 & j == 1 ){
				cout<<"digite el nombre: [ "<<i<<"]["<<j<<"]: ";cin>>matris[i][j];
					 
				}
				else{ 
					   
					cout<<"digite la edad ";	
					cin>>matris[i][j]; 
					
				}
						
			}
		}
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
					cout<<matris[i][j]<<"  ";	
			}
			cout<<endl;
		}
		
	}else{
	
	  Persona p1 = Persona(20,"Alejandro");
	  Persona p2 (19,"maria");	
	  
	  
	  p1.correr();
	  p2.leer();
	}
	
	return 0;
}
