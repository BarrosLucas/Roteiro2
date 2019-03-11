/*
 * main.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */
#include <string>
#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

void preencherDados(string *nome, string *matricula, double *salario);
int main(){
	string nome,matricula;
	double salario;
	float porcent;

	//---------FUNC 1--------
	cout << "Pessoa 1: " << endl;
	preencherDados(&nome,&matricula,&salario);

	Funcionario *funcionario = new Funcionario(nome,matricula,salario);

	//---------FUNC 2--------
	cout << "\n\nPessoa 2: " << endl;
	preencherDados(&nome,&matricula,&salario);

	Consultor *consultor = new Consultor(nome,matricula,salario);

	//----------------
	cout << "\n";
	//----------------

	cout << "Funcionario 1: " << endl;
	cout << "Nome: " << funcionario->getNome() << endl;
	cout << "Matricula: " << funcionario->getMatricula() << endl;
	printf("Salario: R$ %.2f",funcionario->getSalario());

	cout << "\n\nFuncionario 2: " << endl;
	cout << "Nome: " << consultor->getNome() << endl;
	cout << "Matricula: " << consultor->getMatricula() << endl;
	printf("Salario: R$ %.2f",consultor->getSalario());


	cout << "\nQuantos % add ao salario do consultor? ";
	cin >> porcent;

	printf("Salario mais %.1f%%: R$ %.2f",porcent,consultor->getSalario(porcent));

	delete consultor;
	delete funcionario;

	return 0;
}
void preencherDados(string *nome, string *matricula, double *salario){
	fflush(stdin);

	cout << "Nome: ";
	getline(cin,*nome);
	fflush(stdin);

	cout << "Matricula: ";
	getline(cin,*matricula);
	fflush(stdin);

	cout << "Salario: R$ ";
	cin >> *salario;
	fflush(stdin);

}
