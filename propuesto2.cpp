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
	cout<<"----------------------------------------"<<endl;
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	cout<<"----------------------------------------"<<endl;
	cin.ignore();
	system("pause");
	system("cls");
	
	for(int i=0;i<n;i++){
		cout<<"Persona "<<i+1<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Nombres: ";
		getline(cin, personas[i].nombres);
		cout<<"DNI: ";
		cin>>personas[i].DNI;
		cout<<"Edad: ";
		cin>>personas[i].edad;
		cout<<"--------------------------------"<<endl;
		cin.ignore();
		system("pause");
		system("cls");
	}
	
	cout<<"Las personas con una edad mayor a 50 son:"<<endl;
	bool hayMayores = false;
	for(int i=0;i<n;i++){
		if(personas[i].edad>50){
			bool hayMayores = true;
			cout<<"Persona "<<i+1<<endl;
			cout<<"--------------------------------"<<endl;
			cout<<"Nombres: "<<personas[i].nombres<<endl;
			cout<<"DNI: "<<personas[i].DNI<<endl;
			cout<<"Edad: "<<personas[i].edad<<endl;
			cout<<"--------------------------------"<<endl;
		}
	}
	if(!hayMayores){
		cout<<"-------------------------------------------"<<endl;
		cout<<"No hay personas con una edad mayor a 50."<<endl;
		cout<<"-------------------------------------------"<<endl;
	}
	system("pause");
	system("cls");
	
	for(int i=0;i<n;i++){
		suma = suma + personas[i].edad;
	}
	float prom;
	prom = float(suma)/n;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"El promedio de edades de todas las personas es: "<<prom<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	system("pause");
	system("cls");
	
	cout<<"Las personas registradas son: "<<endl;
	cout<<"--------------------------------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Persona "<<i+1<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Nombres: "<<personas[i].nombres<<endl;
		cout<<"DNI: "<<personas[i].DNI<<endl;
		cout<<"Edad: "<<personas[i].edad<<endl;
		cout<<"--------------------------------"<<endl;
	}
	system("pause");
	system("cls");
	
	return 0;
}