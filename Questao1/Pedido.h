/*
 * Pedido.h
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */
#ifndef PEDIDO_H_
#define PEDIDO_H_

#include <string>

class Pedido {
public:
	Pedido(int numero, std::string descricao, int quantidade, double preco);

	int getNumero();
	void setNumero(int numero);

	std::string getDescricao();
	void setDescricao(std::string descricao);

	int getQuantidade();
	void setQuantidade(int quantidade);

	double getPreco();
	void setPreco(double preco);

	virtual ~Pedido();

private:
	int numero;
	std::string descricao;
	int quantidade;
	double preco;
};

#endif /* PEDIDO_H_ */
