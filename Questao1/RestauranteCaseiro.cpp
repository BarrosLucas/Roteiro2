/*
 * RestauranteCaseiro.cpp
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */

#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro() {
	// TODO Auto-generated constructor stub

}

std::vector<MesaDeRestaurante> RestauranteCaseiro::getMesas(){
	return this->mesas;
}

void RestauranteCaseiro::adicionaAoPedido(Pedido pedido, MesaDeRestaurante mesa){
	int index = temMesa(mesa);
	if(index != -1){
		mesas.at(index).adicionaAoPedido(pedido);
	}else{
		mesa.adicionaAoPedido(pedido);
		mesas.push_back(mesa);
	}
}
double RestauranteCaseiro::calculaTotalRestaurante(){
	double total = 0;
	for(MesaDeRestaurante mesa: mesas){
		total += mesa.calculaTotal();
	}
	return total;
}

int RestauranteCaseiro::temMesa(MesaDeRestaurante mesa){
	for(int i = 0; i < mesas.size();i++){
		if(mesas.at(i).getNumero()==mesa.getNumero()){
			return i;
		}
	}
	return -1;
}

RestauranteCaseiro::~RestauranteCaseiro() {
	// TODO Auto-generated destructor stub
	for(MesaDeRestaurante mesa: mesas){
		mesa.~MesaDeRestaurante();
	}
}

