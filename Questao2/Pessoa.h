/*
 * Pessoa.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

/*
 * (b)  Implemente  a  classe  Pessoa  que  possui  os  atributos
 * nome  (String),
 * endereço  (do  tipo Endereco), e
 * telefone (do tipo String)
 * Considere também que ela possui dois construtores (um que só recebe o nome e outro
 * que recebe nome, endereço e telefone) e métodos para obter e alterar esses atributos
 * (métodos get e set).
 *
 * (c) Em seguida, crie o um programa com o método main que cria dois objetos do tipo
 * Pessoa e configura os valores de nome, endereço e telefone desses objetos.
 * */


#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
#include "Endereco.h"
class Pessoa {
public:
	Pessoa(std::string nome);
	Pessoa(std::string nome, Endereco endereco, std::string telefone);

	std::string getNome();
	void setNome(std::string nome);

	Endereco getEndereco();
	void setEndereco(Endereco endereco);

	std::string getTelefone();
	void setTelefone(std::string telefone);

	std::string toString();

	virtual ~Pessoa();

private:
	std::string nome;
	Endereco endereco;
	std::string telefone;
};

#endif /* PESSOA_H_ */
