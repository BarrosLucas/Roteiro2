/*
 * main.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"
#include <string>
#include <iostream>

using namespace std;

void preencherDadosTrabalhadorPorHora(string *nome, double *salario, double *salarioPorHora);
void preencherDadosTrabalhador(string *nome, double *salario);
void preencherHorasTrabalhadas(int *horasTrabalhadas);
int main(){
	string nome;
	double salario, salarioPorHora;
	int horasTrabalhadas;

	//---------TRABALHADOR ASSALARIADO-------
	cout << "Trabalhador assalariado:"<<endl;
	preencherDadosTrabalhador(&nome,&salario);
	TrabalhadorAssalariado *trabalhador1 = new TrabalhadorAssalariado(nome,salario);
	//---------TRABALHADOR POR HORA----------
	cout << "\n\nTrabalhador por hora:"<<endl;
	preencherDadosTrabalhadorPorHora(&nome,&salario,&salarioPorHora);
	TrabalhadorPorHora *trabalhador2 = new TrabalhadorPorHora(salarioPorHora,nome,salario);

	//--------------
	cout << "\n\n"<<endl;
	//--------------

	cout << trabalhador1->getNome() << ":" << endl;
	preencherHorasTrabalhadas(&horasTrabalhadas);
	printf("O ganho semanal do trabalhador assalariado e: R$ %.2f\n\n",trabalhador1->calcularPagamentoSemanal(horasTrabalhadas));

	cout << trabalhador2->getNome() << ":" << endl;
	preencherHorasTrabalhadas(&horasTrabalhadas);
	printf("O ganho semanal do trabalhador por hora e: R$ %.2f\n",trabalhador2->calcularPagamentoSemanal(horasTrabalhadas));

	delete trabalhador1;
	delete trabalhador2;

	return 0;
}

void preencherHorasTrabalhadas(int *horasTrabalhadas){
	fflush(stdin);

	cout << "Horas trabalhadas: ";
	cin >> *horasTrabalhadas;

	fflush(stdin);
}

void preencherDadosTrabalhador(string *nome, double *salario){
	fflush(stdin);

	cout << "Nome: ";
	getline(cin,*nome);
	fflush(stdin);

	cout << "Salario: R$ ";
	cin >> *salario;
	fflush(stdin);
}

void preencherDadosTrabalhadorPorHora(string *nome, double *salario, double *salarioPorHora){
	preencherDadosTrabalhador(nome,salario);
	fflush(stdin);
	cout << "Ganho por hora: R$ ";
	cin >> *salarioPorHora;
	fflush(stdin);
}
