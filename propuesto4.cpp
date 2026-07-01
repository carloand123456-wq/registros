#include <iostream>
#include <string>
using namespace std;

struct Atleta{
	string nombres;
	string pais;
	string disciplina;
	int medallas;
};

int main(){
	int n;
	Atleta A[100];
	cout<<"Ingrese el numero de atletas: ";
	cin>>n;
	cin.ignore();
	
	for(int i=0;i<n;i++){
		cout<<"Atleta "<<i+1<<endl;
		cout<<"Nombres: ";
		getline(cin, A[i].nombres);
		cout<<"Pais: ";
		getline(cin, A[i].pais);
		cout<<"Disciplinas: ";
		getline(cin, A[i].disciplina);
		cout<<"Medallas: ";
		cin>>A[i].medallas;
		cin.ignore();
	}
	
	
	return 0;
}