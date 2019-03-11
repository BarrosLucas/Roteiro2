/*
 * FiguraGeometrica.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "FiguraGeometrica.h"
#include <string>

FiguraGeometrica::FiguraGeometrica(std::string nome) {
	// TODO Auto-generated constructor stub
	setNome(nome);
}

std::string FiguraGeometrica::getNome(){
	return this->nome;
}
void FiguraGeometrica::setNome(std::string nome){
	this->nome = nome;
}
FiguraGeometrica::~FiguraGeometrica() {
	// TODO Auto-generated destructor stub
}

