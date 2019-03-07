/*
 * main.cpp
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */
#include <iostream>
#include <string>
#include <vector>
#include "Pedido.h"
#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"


using namespace std;
int main(){
	//=====CREATE RESTAURANT=====
	RestauranteCaseiro *restaurante = new RestauranteCaseiro();


	//=====CREATE TABLES=====
	for(int i = 0; i < 10; i++){
		MesaDeRestaurante *mesaDeRestaurante = new MesaDeRestaurante(i+1);
		for(int j = 0; j < 5; j++){
			string descricao;
			descricao.append("Produto: ");
			descricao.append(std::to_string(i*5+j));
			Pedido *pedido = new Pedido(((i*5)+j), descricao, 3, (((i*5)+j)*1.5));
			restaurante->adicionaAoPedido(*pedido,*mesaDeRestaurante);

			delete pedido;
		}
		delete mesaDeRestaurante;
	}


	//SHOW TOTAL
	printf("\nTotal do restaurante: R$ %.2f",restaurante->calculaTotalRestaurante());

	//SHOW FOR TABLE
	for(int i = 0; i < restaurante->getMesas().size();i++){
		cout << "Mesa: " << restaurante->getMesas().at(i).getNumero() << endl;
		for(int j = 0; j < restaurante->getMesas().at(i).getPedidos().size(); j++){
			cout << "Pedido:"<<endl;
			cout << "Numero: "<< restaurante->getMesas().at(i).getPedidos().at(j).getNumero() <<endl;
			cout << "Descricao: "<< restaurante->getMesas().at(i).getPedidos().at(j).getDescricao() <<endl;
			cout << "Quantidade: "<< restaurante->getMesas().at(i).getPedidos().at(j).getQuantidade() <<endl;
			cout << "Preço: "<< restaurante->getMesas().at(i).getPedidos().at(j).getPreco() <<endl;
		}
		cout << endl;
	}



	return 0;
}
