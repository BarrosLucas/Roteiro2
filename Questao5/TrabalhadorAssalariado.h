/*
 * TrabalhadorAssalariado.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef TRABALHADORASSALARIADO_H_
#define TRABALHADORASSALARIADO_H_

#include "Trabalhador.h"
#include <string>

class TrabalhadorAssalariado : public Trabalhador{
public:
	TrabalhadorAssalariado(std::string nome, double salario);

	double calcularPagamentoSemanal(int horas);

	virtual ~TrabalhadorAssalariado();
};

#endif /* TRABALHADORASSALARIADO_H_ */
