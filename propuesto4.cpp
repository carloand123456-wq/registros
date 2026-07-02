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
	string pb;
	Atleta A[100];
	cout<<"----------------------------------------"<<endl;
	cout<<"Ingrese el numero de atletas: ";
	cin>>n;
	cout<<"----------------------------------------"<<endl;
	cin.ignore();
	system("pause");
	system("cls");
	
	for(int i=0;i<n;i++){
		cout<<"Atleta "<<"["<<i+1<<"]"<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"Nombres: ";
		getline(cin, A[i].nombres);
		cout<<"Pais: ";
		getline(cin, A[i].pais);
		cout<<"Disciplinas: ";
		getline(cin, A[i].disciplina);
		cout<<"Medallas: ";
		cin>>A[i].medallas;
		cout<<"----------------------------------------"<<endl;
		cin.ignore();
		system("pause");
		system("cls");
	}
	
	cout<<"Ingrese un pais: ";
	getline(cin, pb);
	cout<<"----------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		if(A[i].pais == pb){
			cout<<"Atleta "<<"["<<i+1<<"]"<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"Nombres: "<<A[i].nombres<<endl;
			cout<<"Disciplinas: "<<A[i].disciplina<<endl;
			cout<<"Medallas: "<<A[i].medallas<<endl;
			cout<<"----------------------------------------"<<endl;
		}
	}
	system("pause");
	system("cls");
	
	return 0;
}