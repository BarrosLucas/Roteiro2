/*
 * TrabalhadorPorHora.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "TrabalhadorPorHora.h"
#include <string>

TrabalhadorPorHora::TrabalhadorPorHora(double valorDaHora, std::string nome, double salario):Trabalhador(nome,salario){
	setValorDaHora(valorDaHora);
}

double TrabalhadorPorHora::getValorDaHora(){
	return this->valorDaHora;
}
void TrabalhadorPorHora::setValorDaHora(double valorDaHora){
	this->valorDaHora=valorDaHora;
}
double TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
	if(horas<=40){
		return horas*getValorDaHora();
	}else{
		return (40*getValorDaHora())+((horas-40)*1.5)*getValorDaHora();
	}
}

TrabalhadorPorHora::~TrabalhadorPorHora() {
	// TODO Auto-generated destructor stub
}

