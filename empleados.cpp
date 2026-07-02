#include <iostream>
#include <string>
using namespace std;

struct Empleado{
	int numero;
	string nombres;
	int ventas[12];
	float salario;
};

int main(){
	int n, max;
	float anual[100];
	Empleado E[100];
	cout<<"Ingrese el numero de empleados: ";
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"Empleado "<<endl;
		cout<<"Numero: "<<i+1<<endl;
		E[i].numero = i+1;
		cout<<"Nombres: ";
		getline(cin, E[i].nombres);
		cout<<"Ventas: "<<endl;
		for(int j=0;j<12;j++){
			cout<<"Ingrese las ventas del mes "<<j+1<<":";
			cin>>E[i].ventas[j];
		}
		cout<<"Salario: ";
		cin>>E[i].salario;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<12;j++){
			anual[i]= anual[i] + E[i].ventas[j];
		}
	}
	
	
	
	return 0;
}