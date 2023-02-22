#include<iostream>

using namespace std;

class factura {
	
	private:
		string nombre;
		int documento;
	public:
		int cant_productos;
		float costo;
		factura (string,int,int,float);
		void mostrar ();
	
	
};

factura::factura(string _nombre,int _documento,int _cant_productos,float _costo ){
	
	nombre = _nombre;
	documento = _documento;
	cant_productos = _cant_productos;
	costo = _costo;
};
void factura::mostrar(){
	cout<<"cliente >"<<nombre<<endl;
	cout<<"documento >"<<documento<<endl;
	cout<<"Cantidad de productos registrados >"<<cant_productos<<endl;
	cout<<"Costo total de factura >"<<costo<<endl;
};

int main (){
	
	 float iva ,costo_total,costo;
	 string nombre ;
	 int docu,produc;
	 
	 cout<<"digite el nombre del cliente: "; cin>>nombre;
	 cout<<"Digite el documento del cliente : "; cin>>docu;
	 cout<<"Digite la cantidad de productos comprada : "; cin>>produc;
	 cout<<"dijita el costo neto de la compra: "; cin>>costo;
	 
	factura cliente1 (nombre,docu,produc,costo);
	
	iva = costo * 0.19;
	costo_total = iva+ costo;
	
	
	
	cliente1.mostrar();
	cout<<"costo total con el iva del 0.19% aplicado"<<costo_total;
	return 0;
}
