/*
 * Triangulo.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo() : FiguraGeometrica("Triangulo"){
	// TODO Auto-generated constructor stub

}

void Triangulo::calcularArea(){
	double base,altura;
	std::cout << "Para calcular a area do triangulo, informe:"<<std::endl;
	std::cout << "Base: ";
	std::cin >> base;
	std::cout << "Altura: ";
	std::cin >> altura;
	printf("\nArea: %.2f\n",((base*altura)/2));
}

Triangulo::~Triangulo() {
	// TODO Auto-generated destructor stub
}

