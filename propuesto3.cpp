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
	cout<<"----------------------------------------"<<endl;
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	cout<<"----------------------------------------"<<endl;
	cin.ignore();
	system("pause");
	system("cls");
	
	for(int i=0;i<n;i++){
		cout<<"Persona "<<"["<<i+1<<"]"<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"Nombres: ";
		getline(cin, p[i].nombre);
		cout<<"Dia: ";
		cin>>p[i].dia;
		cout<<"Mes: ";
		cin>>p[i].mes;
		cout<<"Anio: ";
		cin>>p[i].anio;
		cout<<"----------------------------------------"<<endl;
		cin.ignore();
		system("pause");
		system("cls");
	}
	
	do{
		cout<<"Ingrese un numero de mes: ";
		cin>>nm;
		cout<<"----------------------------------------"<<endl;
		if(nm != 0){
			bool encontrado = false;
			for(int i=0;i<n;i++){
				if(p[i].mes == nm){
					cout<<"Persona "<<"["<<i+1<<"]"<<endl;
					cout<<"----------------------------------------"<<endl;
					cout<<"Nombres: "<<p[i].nombre<<endl;
					cout<<"Dia: "<<p[i].dia<<endl;
					cout<<"Mes: "<<p[i].mes<<endl;
					cout<<"Anio: "<<p[i].anio<<endl;
					cout<<"----------------------------------------"<<endl;
					encontrado = true;
				}
			}
			if(!encontrado){
				cout<<"No hay nadie que nacio en ese mes. "<<endl;
				cout<<"----------------------------------------"<<endl;
			}
		}
		else{
			cout<<"Cerrando el programa. "<<endl;
			cout<<"----------------------------------------"<<endl;
		}
		system("pause");
		system("cls");
	} while(nm != 0);
	
	return 0;
}