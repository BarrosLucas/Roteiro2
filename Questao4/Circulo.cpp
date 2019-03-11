/*
 * Circulo.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Circulo.h"
#include "iostream"
#include <cmath>


Circulo::Circulo() : FiguraGeometrica("Circulo"){
	// TODO Auto-generated constructor stub

}

void Circulo::calcularArea(){
	double raio;
	std::cout << "Para calcular a area do circulo, informe:"<<std::endl;
	std::cin >> raio;

	printf("\nArea: %.2f\n",raio*raio*M_PI);

}

Circulo::~Circulo() {
	// TODO Auto-generated destructor stub
}

