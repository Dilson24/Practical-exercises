#include<iostream>

using namespace std;

class empleado{
	public:
	string m_nombre,m_departamento,m_posicion;
	int m_salario;
	void imprimir ();
	empleado(string,string,string,int);
};

empleado::empleado (string nombre,string departamento,string posicion,int salario){
	m_nombre = nombre;
	m_departamento = departamento;
	m_posicion = posicion;
	m_salario = salario;

};

void empleado::imprimir(){
cout<<"nombre "<< m_nombre<<endl;
cout<<"departamento "<< m_departamento<<endl;
cout<<"posicion "<< m_posicion<<endl;
cout<<"salario "<<  m_salario<<endl;
};


int main(){
	
	string nombre, departamento, posicion,inicio,decid;
	int salario;
	
	cout<<"Desea agregar los datos del empleado para si Digite (s), si no  Digite (n) > ";cin>>decid; 
	
	if (decid =="s"|| decid == "S"){
	
	
	cout<<"digite el nombre del empleado: ";cin>>nombre;
	cout<<"digite el departamento del empleado: ";cin>>departamento;
	cout<<"digite la posicion del empleasdo: ";cin>>posicion;
	cout<<"digite el salario del empleado: ";cin>>salario;
	
	empleado p1 (nombre,departamento,posicion,salario);
	p1.imprimir();
	
	}else{
		
		empleado p1 ("Diana","Confeccion","Maquina plana",1000000);
		p1.imprimir();
		
	};
	
	cout<<"desea agregar otro empleado?: ";
	
	cout<<"digite la tecla s para reiniciar el programa o cualquier tecla para acabarlo: "<<inicio;
	if(inicio == "s" || inicio =="S"){
		main();
	};
	
	return 0;
}
