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
	int n;
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
	
	return 0;
}