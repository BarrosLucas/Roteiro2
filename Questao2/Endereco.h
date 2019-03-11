/*
 * Endereco.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

/*
 * (a)  Implemente  a  classe  Endereco,  com  os  atributos
 * rua  (String),
 * número,
 * bairro,
 * cidade,
 * estado e
 * CEP  (String)
 * Crie um construtor que  receba os parâmetro  referentes aos atributos.
 * Crie o método toString() que retorna todos os atributos da classe Endereço na forma de
 * string.
 */

#ifndef ENDERECO_H_
#define ENDERECO_H_

#include <string>

class Endereco {
public:
	Endereco();
	Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string CEP);

	std::string getRua();
	void setRua(std::string rua);

	int getNumero();
	void setNumero(int numero);

	std::string getBairro();
	void setBairro(std::string bairro);

	std::string getCidade();
	void setCidade(std::string cidade);

	std::string getEstado();
	void setEstado(std::string estado);

	std::string getCEP();
	void setCEP(std::string CEP);

	std::string toString();

	virtual ~Endereco();

private:
	std::string rua;
	int numero;
	std::string bairro;
	std::string cidade;
	std::string estado;
	std::string CEP;
};

#endif /* ENDERECO_H_ */
