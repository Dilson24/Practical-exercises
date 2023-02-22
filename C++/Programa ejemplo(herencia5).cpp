#include <iostream>
 using namespace std;
 
  class Persona { 
  public:
   char nombre[40];
   int edad; }; 
   
 class Empleado: public Persona {
    public: 
	int salario; 
	void cargar_datos();
	void MesAguinaldo();
};
	
void Empleado::cargar_datos() { 
  cout << "Ingrese el Nombre del empleado: ";cin >> nombre; 
  cout << "\n Ingrese la Edad del empleado: ";cin >>edad;
  cout << "\n Ingrese el  Salario del empleado: ";cin >>salario;

  }

void Empleado::MesAguinaldo (){ 
  cout <<"\n EL aguinaldo que le corresponde al empleado es:" << salario*2;
  };
  
   
  int main() { 
  
  Empleado trabajador; 
  
  trabajador.cargar_datos(); 
  
  trabajador.MesAguinaldo(); 
  
  return 0; } 
	

