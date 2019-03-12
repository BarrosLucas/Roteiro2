/*
 * TrabalhadorAssalariado.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "TrabalhadorAssalariado.h"
#include <iostream>

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string nome, double salario) :Trabalhador(nome,salario) {
	// TODO Auto-generated constructor stub

}
double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){
	std::cout << "Salario: " << getSalario() << std::endl;
	return (getSalario()/4.0);
}

TrabalhadorAssalariado::~TrabalhadorAssalariado() {
	// TODO Auto-generated destructor stub
}

