#include <iostream>
#include <string>
using namespace std;

struct Persona{
	string nombre;
	int dia;
	int mes;
	int anio;
};

int main(){
	int n, nm;
	Persona p[100];
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"Persona "<<i+1<<endl;
		cout<<"Nombres: ";
		getline(cin, p[i].nombre);
		cout<<"Dia: ";
		cin>>p[i].dia;
		cout<<"Mes: ";
		cin>>p[i].mes;
		cout<<"Anio: ";
		cin>>p[i].anio;
		cin.ignore();
	}
	
	do{
		cout<<"Ingrese un numero de mes: ";
		cin>>nm;
		for(int i=0;i<n;i++){
			if(p[i].mes == nm){
				cout<<"Persona "<<i+1<<endl;
				cout<<"Nombres: "<<p[i].nombre<<endl;
				cout<<"Dia: "<<p[i].dia<<endl;
				cout<<"Mes: "<<p[i].mes<<endl;
				cout<<"Anio: "<<p[i].anio<<endl;
			}
		}
	} while(nm != 0);
	
	return 0;
}