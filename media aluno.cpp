#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float N1, N2, N3, media, MA;
	
	cout << "Digite a nota 1 do aluno: \n";
	cin >> N1;
	
	cout << "Digite a nota 2: \n";
	cin >> N2;
	
	cout << "Digite a nota 3: \n";
	cin >> N3;
	
	media = (N1 + N2 + N3)/3;
	MA = (N1 + N2*2 + N3*3 + media)/7;
	
	cout << "A média do aluno é " << media << ".\n";
	cout << "E a média de aproveitamento é " << MA << ".\n";
	
	if (media>=9){
		cout << "\nO aluno teve aproveitamento A.\n";
	} 
	else if (media>=7.5 && media<9){
		cout << "\nEste aluno teve aproveitamento B.\n";
	}
	else if (media>=6 && media<7.5){
		cout << "\nEste aluno teve aproveitamento C.\n";
	}
	else if (media>=4 && media<6){
		cout << "\nEste aluno teve aproveitamento D.\n";
	}
	else{
		cout << "\nEste aluno esta REPROVADO.\n";
	}
	
	
	return 0;	
	
} 
