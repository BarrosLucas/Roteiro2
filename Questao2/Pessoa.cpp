/*
 * Pessoa.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Pessoa.h"


Pessoa::Pessoa(std::string nome){
	setNome(nome);
}
Pessoa::Pessoa(std::string nome, Endereco endereco, std::string telefone){
	setNome(nome);
	setEndereco(endereco);
	setTelefone(telefone);
}

std::string Pessoa::getNome(){
	return this->nome;
}
void Pessoa::setNome(std::string nome){
	this->nome = nome;
}

Endereco Pessoa::getEndereco(){
	return this->endereco;
}
void Pessoa::setEndereco(Endereco endereco){
	this->endereco = endereco;
}

std::string Pessoa::getTelefone(){
	return this->telefone;
}
void Pessoa::setTelefone(std::string telefone){
	this->telefone = telefone;
}

std::string Pessoa::toString(){
	std::string descricao;
	descricao.append("Nome: ");
	descricao.append(getNome());
	descricao.append("\nTelefone: ");
	descricao.append(getTelefone());
	descricao.append("\n");
	descricao.append(getEndereco().toString());

	return descricao;
}

Pessoa::~Pessoa() {
	// TODO Auto-generated destructor stub
}

