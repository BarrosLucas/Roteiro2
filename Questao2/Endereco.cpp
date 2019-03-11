/*
 * Endereco.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Endereco.h"


Endereco::Endereco(){

}
Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string CEP) {
	// TODO Auto-generated constructor stub
	setRua(rua);
	setNumero(numero);
	setBairro(bairro);
	setCidade(cidade);
	setEstado(estado);
	setCEP(CEP);
}


std::string Endereco::getRua(){
	return this->rua;
}
void Endereco::setRua(std::string rua){
	this->rua = rua;
}

int Endereco::getNumero(){
	return this->numero;
}
void Endereco::setNumero(int numero){
	this->numero = numero;
}

std::string Endereco::getBairro(){
	return this->bairro;
}
void Endereco::setBairro(std::string bairro){
	this->bairro = bairro;
}

std::string Endereco::getCidade(){
	return this->cidade;
}
void Endereco::setCidade(std::string cidade){
	this->cidade = cidade;
}

std::string Endereco::getEstado(){
	return this->estado;
}
void Endereco::setEstado(std::string estado){
	this->estado = estado;
}

std::string Endereco::getCEP(){
	return this->CEP;
}
void Endereco::setCEP(std::string CEP){
	this->CEP = CEP;
}

std::string Endereco::toString(){
	std::string endereco;
	endereco.append("Endereco: \n");
	endereco.append("\tRua: ");
	endereco.append(getRua());
	endereco.append("\n\tNumero: ");
	endereco.append(std::to_string(getNumero()));
	endereco.append("\n\tBairro: ");
	endereco.append(getBairro());
	endereco.append("\n\tCidade: ");
	endereco.append(getCidade());
	endereco.append("\n\tEstado: ");
	endereco.append(getEstado());
	endereco.append("\n\tCEP: ");
	endereco.append(getCEP());
	return endereco;
}

Endereco::~Endereco() {
	// TODO Auto-generated destructor stub
}

