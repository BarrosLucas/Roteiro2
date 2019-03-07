/*
 * MesaDeRestaurante.h
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */

#ifndef MESADERESTAURANTE_H_
#define MESADERESTAURANTE_H_

#include <vector>
#include "Pedido.h"

class MesaDeRestaurante {
public:
	MesaDeRestaurante(int numero);

	std::vector<Pedido> getPedidos();

	int getNumero();
	void setNumero(int numero);

	void adicionaAoPedido(Pedido pedido);
	void zeraPedidos();
	double calculaTotal();

	virtual ~MesaDeRestaurante();
private:
	int temPedido(int numero);
	int numero; //NÃO HÁ NA DESCRIÇÃO, MAS ADICIONEI PARA QUE CADA MESA TENHA UMA IDENTIFICAÇÃO
	std::vector<Pedido> pedidos;
};

#endif /* MESADERESTAURANTE_H_ */
