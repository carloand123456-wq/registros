#include <iostream>
#include <string>
using namespace std;

struct Empleado{
	string nombres;
	char sexo;
	float sueldo;
};

int main(){
	int n;
	Empleado empleados[100];
	cout<<"Ingrese la cantidad de trabajadores: ";
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"\nEmpleado "<<i+1<<endl;
		cout<<"Nombres: ";
		getline(cin, empleados[i].nombres);
		cout<<"Sexo: ";
		cin>>empleados[i].sexo;
		cout<<"Sueldo: ";
		cin>>empleados[i].sueldo;
		cin.ignore();
	}
	
	
	
	return 0;
}