/*
 * Trabalhador.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Trabalhador.h"



Trabalhador::Trabalhador() {
	// TODO Auto-generated constructor stub

}

Trabalhador::Trabalhador(std::string nome, double salario) {
	// TODO Auto-generated constructor stub
	setNome(nome);
	setSalario(salario);
}

std::string Trabalhador::getNome(){
	return this->nome;
}
void Trabalhador::setNome(std::string nome){
	this->nome = nome;
}

double Trabalhador::getSalario(){
	return this->salario;
}

void Trabalhador::setSalario(double salario){
	this->salario = salario;
}

Trabalhador::~Trabalhador() {
	// TODO Auto-generated destructor stub
}

