/*
 * Pedido.cpp
 *
 *  Created on: 7 de mar de 2019
 *      Author: lucas
 */

#include "Pedido.h"

Pedido::Pedido(int numero, std::string descricao, int quantidade, double preco) {
	setNumero(numero);
	setDescricao(descricao);
	setQuantidade(quantidade);
	setPreco(preco);

}

int Pedido::getNumero(){
	return this->numero;
}
void Pedido::setNumero(int numero){
	this->numero = numero;
}

std::string Pedido::getDescricao(){
	return this->descricao;
}
void Pedido::setDescricao(std::string descricao){
	this->descricao = descricao;
}

int Pedido::getQuantidade(){
	return this->quantidade;
}
void Pedido::setQuantidade(int quantidade){
	this->quantidade=quantidade;
}

double Pedido::getPreco(){
	return this->preco;
}
void Pedido::setPreco(double preco){
	this->preco=preco;
}

Pedido::~Pedido() {
	// TODO Auto-generated destructor stub
}

