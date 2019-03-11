/*
 * Trapezio.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#include "Trapezio.h"
#include <iostream>


Trapezio::Trapezio() : FiguraGeometrica("Trapezio"){
	// TODO Auto-generated constructor stub

}

void Trapezio::calcularArea(){
	double bM,bm,h;
	std::cout << "Para calcular a area do trapezio, informe:" <<std::endl;
	std::cout << "Base maior: ";
	std::cin >> bM;
	std::cout << "Base menor: ";
	std::cin >> bm;
	std::cout << "Altura: ";
	std::cin >> h;
	printf("\nArea: %.2f\n",(((bM+bm)*h)/2));
}

Trapezio::~Trapezio() {
	// TODO Auto-generated destructor stub
}

