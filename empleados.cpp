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
	
	int pos;
	max = anual[1];
	for(int i=1;i<n;i++){
		if(anual[i]>max){
			max = anual[i];
			pos = i;
		}
	}
	
	cout<<"El empleado con mayor sueldo es: "<<endl;
	cout<<"Empleado "<<endl;
	cout<<"Numero: "<<E[pos].numero<<endl;
	cout<<"Nombres: "<<E[pos].nombres<<endl;
	
	for(int i =0;i<n;i++){
		if(anual[i]>100){
			E[i].salario = E[i].salario * 1.1;
		}
	}
	
	cout<<"La nueva lista de empleados es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Empleado "<<endl;
		cout<<"Numero: "<<E[i].numero<<endl;
		cout<<"Nombres: "<<E[i].nombres<<endl;
		cout<<"Ventas: "<<endl;
		for(int j=0;j<12;j++){
			cout<<"La venta del mes "<<j+1<<" es: "<<E[i].ventas[j]<<endl;
		}
		cout<<"Salario: "<<E[i].salario<<endl;
	}
	
	return 0;
}