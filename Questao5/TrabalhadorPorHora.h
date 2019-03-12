/*
 * TrabalhadorPorHora.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef TRABALHADORPORHORA_H_
#define TRABALHADORPORHORA_H_

#include "Trabalhador.h"
#include <string>

class TrabalhadorPorHora: public Trabalhador {
public:
	TrabalhadorPorHora(double valorDaHora, std::string nome, double salario);

	double getValorDaHora();
	void setValorDaHora(double valorDaHora);
	double calcularPagamentoSemanal(int horas);

	virtual ~TrabalhadorPorHora();

private:
	double valorDaHora;
};

#endif /* TRABALHADORPORHORA_H_ */
