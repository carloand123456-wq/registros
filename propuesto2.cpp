#include <iostream>
#include <string>
using namespace std;

struct Persona{
	string nombres;
	string DNI;
	int edad;
};

int main(){
	int n, suma;
	Persona personas[100];
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"\nPersona "<<i+1<<endl;
		cout<<"Nombres: ";
		getline(cin, personas[i].nombres);
		cout<<"DNI: ";
		cin>>personas[i].DNI;
		cout<<"Edad: ";
		cin>>personas[i].edad;
		cin.ignore();
	}
	
	system("cls");
	cout<<"Las personas con una edad mayor a 50 son: ";
	for(int i=0;i<n;i++){
		if(personas[i].edad>50){
			cout<<"\nPersona "<<i+1<<endl;
			cout<<"Nombres: "<<personas[i].nombres<<endl;
			cout<<"DNI: "<<personas[i].DNI<<endl;
			cout<<"Edad: "<<personas[i].edad<<endl;
		}
	}
	
	for(int i=0;i<n;i++){
		suma = suma + personas[i].edad;
	}
	float prom = suma/n;
	cout<<"\nEl promedio de edades de todas las personas es: "<<prom;
	
	
	return 0;
}