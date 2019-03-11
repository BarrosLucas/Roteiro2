/*
 * Retangulo.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Retangulo.h"
#include <iostream>
Retangulo::Retangulo() : FiguraGeometrica("Retangulo"){
	// TODO Auto-generated constructor stub

}

void Retangulo::calcularArea(){
	double base,altura;
	std::cout << "Para calcular a area do retangulo, informe:"<<std::endl;
	std::cout << "Base: ";
	std::cin >> base;
	std::cout << "Altura: ";
	std::cin >> altura;

	printf("\nArea: %.2f\n",base*altura);
}

Retangulo::~Retangulo() {
	// TODO Auto-generated destructor stub
}

