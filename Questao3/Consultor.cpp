/*
 * Consultor.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Consultor.h"

Consultor::Consultor(std::string matricula, std::string nome, double salario) : Funcionario(matricula, nome, salario){
	// TODO Auto-generated constructor stub

}
double Consultor::getSalario(){
	setSalario(this->salario*1.1);
	return this->salario;
}
double Consultor::getSalario(float percentual){
	setSalario(this->salario * ((percentual/100.0)+1.0));
	return this->salario;
}

Consultor::~Consultor() {
	// TODO Auto-generated destructor stub
}

