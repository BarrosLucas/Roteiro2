/*
 * Funcionario.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_


#include <string>
/*
 * Crie  uma  classe Funcionariocom  os  atributos
 * matricula,
 * nome
 * salário,
 * e  os métodos get()e set()de cada atributo.
 * */

class Funcionario {
public:
	Funcionario(std::string matricula, std::string nome, double salario);

	std::string getMatricula();
	void setMatricula(std::string matricula);

	std::string getNome();
	void setNome(std::string nome);

	double getSalario();
	void setSalario(double salario);

	virtual ~Funcionario();

protected:
	std::string matricula;
	std::string nome;
	double salario;
};

#endif /* FUNCIONARIO_H_ */
