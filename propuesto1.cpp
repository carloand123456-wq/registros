#include <iostream>
#include <string>
using namespace std;

struct Empleado{
	string nombres;
	string sexo;
	float sueldo;
};

int main(){
	int n, min, max, pos;
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
	
	max = empleados[1].sueldo;
	for(int i=1;i<n;i++){
		if(empleados[i].sueldo>max){
			max = empleados[i].sueldo;
			pos = i;
		}
	}
	
	system("pause");
	system("cls");
	cout<<"El empleado con mayor sueldo es: "<<endl;
	cout<<"\nEmpleado "<<pos+1<<endl;
	cout<<"Nombres: "<<empleados[pos].nombres<<endl;
	cout<<"Sexo: "<<empleados[pos].sexo<<endl;
	cout<<"Sueldo: "<<empleados[pos].sueldo<<endl;
	
	min = empleados[1].sueldo;
	for (int i=1;i<n;i++){
		if(empleados[i].sueldo<min){
			min = empleados[i].sueldo;
			pos = i;
		}
	}
	
	cout<<"\nEl empleado con menor sueldo es: "<<endl;
	cout<<"\nEmpleado "<<pos+1<<endl;
	cout<<"Nombres: "<<empleados[pos].nombres<<endl;
	cout<<"Sexo: "<<empleados[pos].sexo<<endl;
	cout<<"Sueldo: "<<empleados[pos].sueldo<<endl;
	cout<<" "<<endl;
	system("pause");
	
	return 0;
}