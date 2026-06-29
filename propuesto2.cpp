#include <iostream>
#include <string>
using namespace std;

struct Persona{
	string nombres;
	string DNI;
	int edad;
};

int main(){
	int n;
	Persona personas[100];
	cout<<"Ingrese la cantidad de personas: ";
	cin>>n;
	cout<<endl;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"Persona "<<i+1<<endl;
		cout<<"Nombres: ";
		getline(cin, personas[i].nombres);
		cout<<"DNI: ";
		cin>>personas[i].DNI;
		cout<<"Edad: ";
		cin>>personas[i].edad;
		cin.ignore();
	}
	
	
	
	return 0;
}