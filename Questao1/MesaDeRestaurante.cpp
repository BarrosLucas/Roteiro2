/*
 * MesaDeRestaurante.cpp
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */

#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(int numero) {
	setNumero(numero);
}

std::vector<Pedido> MesaDeRestaurante::getPedidos(){
	return this->pedidos;
}

void MesaDeRestaurante::setNumero(int numero){
	this->numero = numero;
}

int MesaDeRestaurante::getNumero(){
	return this->numero;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido pedido){
	int index = temPedido(pedido.getNumero());
	if(index != -1){
		pedidos.at(index).setQuantidade(pedidos.at(index).getQuantidade()+pedido.getQuantidade());
	}else{
		pedidos.push_back(pedido);
	}
}
void MesaDeRestaurante::zeraPedidos(){
	for(int i = 0; pedidos.size();i++){
		pedidos.at(i).setQuantidade(0);
	}
}
double MesaDeRestaurante::calculaTotal(){
	double retorno = 0;
	for(Pedido pedido: pedidos){
		retorno += (pedido.getQuantidade()*pedido.getPreco());
	}
	return retorno;
}

int MesaDeRestaurante::temPedido(int numero){
	for(int i=0; i<pedidos.size();i++){
		if(pedidos.at(i).getNumero()==numero){
			return i;
		}
	}
	return -1;
}

MesaDeRestaurante::~MesaDeRestaurante() {
	// TODO Auto-generated destructor stub
	for(Pedido pedido: pedidos){
		pedido.~Pedido();
	}
}

