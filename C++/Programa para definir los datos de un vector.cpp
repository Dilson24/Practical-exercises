/*Programa para definir los datos de un vector.*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
	int v[5];
	int i;
	
	for(i=0;i<=4;i=i+1){
		cout<<"Introduzca un valor\n";
		cin>>v[i];
	}
	cout <<"\n\n";
	
	for(i=0;i<=4;i=i+1){
		cout<<v[i]<<" ";
	}
	cout <<"\n\n";
	
	for (i=0;i<=4;i=i+1){
		cout<<v[i]<<"\n";
		
	}
	return 0;
}
