/*
 * Trabalhador.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef TRABALHADOR_H_
#define TRABALHADOR_H_

#include <string>

class Trabalhador {
public:
	Trabalhador();
	Trabalhador(std::string nome, double salario);

	std::string getNome();
	void setNome(std::string nome);

	double getSalario();
	virtual double calcularPagamentoSemanal(int horas)=0;
	void setSalario(double salario);

	virtual ~Trabalhador();

private:
	std::string nome;
	double salario;
};

#endif /* TRABALHADOR_H_ */
