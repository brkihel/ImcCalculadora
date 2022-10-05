#include <iostream>
#include <string>
#include <locale.h>
#include "Funcoes.h";

using namespace std;

int main() {

	int idade;
	double peso;
	double altura;
	string nome;
	double pesoIdeal;
	int escolha = 1;
	int escolha2 = 1;

	setlocale(LC_ALL, "");

	while (escolha == 1) {
		cout << "======================================" << endl;
		cout << "=   BEM VINDO A CALCULADORA DE IMC   =" << endl;
		cout << "======================================" << endl;
		cout << "=           MENU DE OPÇÕES           =" << endl;
		cout << "======================================" << endl;
		cout << "=      0 - Sair do programa          =" << endl;
		cout << "=      1 - Calcular o seu IMC        =" << endl;
		cout << "======================================" << endl;
		cin >> escolha;
		system("CLS");
		switch (escolha) {
		case 0:
			cout << "======================================" << endl;
			cout << "=       Você fechou o programa.      =" << endl;
			cout << "======================================" << endl;
			exit(0);
		case 1:
			cout << "======================================" << endl;
			cout << "=       Olá, digite o seu nome:      =" << endl;
			cout << "======================================" << endl;
			cin.ignore(1, '\n');
			getline(cin, nome);
			system("CLS");
			cout << "======================================" << endl;
			cout << "=     Agora digite a sua idade:      =" << endl;
			cout << "======================================" << endl;
			cin >> idade;
			system("CLS");
			cout << "======================================" << endl;
			cout << "=       Qual o seu peso atual?       =" << endl;
			cout << "======================================" << endl;
			cin >> peso;
			system("CLS");
			cout << "======================================" << endl;
			cout << "=        E qual a sua altura?        =" << endl;
			cout << "======================================" << endl;
			cin >> altura;
			system("CLS");

			cout << "======================================" << endl;
			cout << "=      !CALCULANDO O SEU IMC!        =" << endl;
			cout << "======================================" << endl;
						
			pesoIdeal = calcularImc(peso, altura);
			cout << "======================================" << endl;
			cout << "= Nome: " << nome << "     =" << endl;
			cout << "= Idade: " << idade << "    =" << endl;
			cout << "= Altura: " << altura << "    =" << endl;
			cout << "= Baseado na sua altura e peso atual seu IMC é de : " << pesoIdeal << "=" << endl;
			if (pesoIdeal <= 17) {
				cout << "Este valor de Indice de massa corporal indica que você está muito abaixo do peso!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if(escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
			else if (pesoIdeal > 17 && pesoIdeal <= 18.5) {
				cout << "Este valor de Indice de massa corporal indica que você está abaixo do peso!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if (escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
			else if (pesoIdeal > 18.5 && pesoIdeal <= 24.9) {
				cout << "Este valor de Indice de massa corporal indica que você tem o peso ideal!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if (escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
			else if (pesoIdeal > 24.9 && pesoIdeal <= 29.9) {
				cout << "Este valor de Indice de massa corporal indica que você está acima do peso!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if (escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
			else if (pesoIdeal > 29.9 && pesoIdeal <= 34.9) {
				cout << "Este valor de Indice de massa corporal indica que você está entrando na obesidade I. Cuide da sua saúde!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if (escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
			else if (pesoIdeal > 34.9 && pesoIdeal <= 39.9) {
				cout << "Este valor de Indice de massa corporal indica que você está em estado de obesidade II(severa!) Cuide da sua alimentação e da sua saúde!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if (escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
			else if (pesoIdeal > 39.9) {
				cout << "Este valor de Indice de massa corporal indica que você está em estado de obesidade III(mórbida!) Cuide da sua alimentação e da sua saúde!" << endl;
				cout << "O cálculo terminou!" << endl;
				cout << "=====================================================" << endl;
				cout << "=        Se desejar fechar o programa digite 1      =" << endl;
				cout << "=     Se desejar fazer um novo cálculo digite 2     =" << endl;
				cout << "=====================================================" << endl;
				cin >> escolha2;
				if (escolha2 == 1) {
					cout << "======================================" << endl;
					cout << "=       Você fechou o programa.      =" << endl;
					cout << "======================================" << endl;
					exit(0);
				}
				else if (escolha2 == 2) {
					system("CLS");
				}
				else {
					cout << "Escolha inválida, reiniciando o programa..." << endl;
					system("CLS");
				}
			}
		}
	}
	return 0;
}