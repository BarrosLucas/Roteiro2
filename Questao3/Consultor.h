/*
 * Consultor.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef CONSULTOR_H_
#define CONSULTOR_H_

/*
 * Em seguida,  crie uma classe Consultor que herda da classe Funcionario e
 * sobrescreve o método getSalario(), adicionando um percentual de  10%
 * no  valor  do  salário.  Implemente  também  um  método
 * getSalario(float percentual),  onde  o  parâmetro  “float percentual”
 * determina  o  percentual  a  ser acrescido no salário de Consultor.
 */
#include "Funcionario.h"

class Consultor : public Funcionario{
public:
	Consultor(std::string matricula, std::string nome, double salario);

	double getSalario();
	double getSalario(float porcentagem);

	virtual ~Consultor();
};

#endif /* CONSULTOR_H_ */
