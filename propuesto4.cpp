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
		cout<<"Disciplina: ";
		getline(cin, A[i].disciplina);
		cout<<"Medallas: ";
		cin>>A[i].medallas;
		cout<<"----------------------------------------"<<endl;
		cin.ignore();
		system("pause");
		system("cls");
	}
	
	int pos, max = 0;
	cout<<"Ingrese un pais: ";
	getline(cin, pb);
	cout<<"----------------------------------------"<<endl;
	for(int i=0;i<n;i++){
		if(A[i].pais == pb){
			cout<<"Atleta "<<"["<<i+1<<"]"<<endl;
			cout<<"----------------------------------------"<<endl;
			cout<<"Nombres: "<<A[i].nombres<<endl;
			cout<<"Disciplina: "<<A[i].disciplina<<endl;
			cout<<"Medallas: "<<A[i].medallas<<endl;
			cout<<"----------------------------------------"<<endl;
			if(A[i].medallas>max){
				max = A[i].medallas;
				pos = i;
			}
		}
	}
	
	cout<<"El atleta de "<<pb<<" con mas medallas es: "<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<"Nombres: "<<A[pos].nombres<<endl;
	cout<<"Disciplina: "<<A[pos].disciplina<<endl;
	cout<<"Medallas: "<<A[pos].medallas<<endl;
	cout<<"----------------------------------------"<<endl;
	
	system("pause");
	system("cls");
	
	return 0;
}