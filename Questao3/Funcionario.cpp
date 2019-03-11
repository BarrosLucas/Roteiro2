/*
 * Funcionario.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Funcionario.h"

Funcionario::Funcionario(std::string matricula, std::string nome, double salario){
	setMatricula(matricula);
	setNome(nome);
	setSalario(salario);
}

std::string Funcionario::getMatricula(){
	return this->matricula;
}
void Funcionario::setMatricula(std::string matricula){
	this->matricula = matricula;
}

std::string Funcionario::getNome(){
	return this->nome;
}
void Funcionario::setNome(std::string nome){
	this->nome = nome;
}

double Funcionario::getSalario(){
	return this->salario;
}
void Funcionario::setSalario(double salario){
	this->salario = salario;
}
Funcionario::~Funcionario() {
	// TODO Auto-generated destructor stub
}

