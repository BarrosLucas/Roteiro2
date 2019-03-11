/*
 * Quadrado.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Quadrado.h"
#include <iostream>
Quadrado::Quadrado() : FiguraGeometrica("Quadrado"){
	// TODO Auto-generated constructor stub

}
void Quadrado::calcularArea(){
	double lado;
	std::cout << "Para calcular a area do quadrado, informe: " << std::endl;
	std::cout << "Lado: ";
	std::cin >> lado;
	printf("\nArea: %.2f\n",lado*lado);

}

Quadrado::~Quadrado() {
	// TODO Auto-generated destructor stub
}

