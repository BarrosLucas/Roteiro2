/*
 * RestauranteCaseiro.h
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */

#ifndef RESTAURANTECASEIRO_H_
#define RESTAURANTECASEIRO_H_

#include <vector>
#include "MesaDeRestaurante.h"

class RestauranteCaseiro {
public:
	RestauranteCaseiro();

	std::vector<MesaDeRestaurante> getMesas();

	void adicionaAoPedido(Pedido pedido, MesaDeRestaurante mesa);
	double calculaTotalRestaurante();

	virtual ~RestauranteCaseiro();

private:
	int temMesa(MesaDeRestaurante mesa);
	std::vector<MesaDeRestaurante> mesas;
};

#endif /* RESTAURANTECASEIRO_H_ */
