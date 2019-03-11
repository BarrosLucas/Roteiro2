/*
 * main.cpp
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */
#include "Circulo.h"
#include "Quadrado.h"
#include "Retangulo.h"
#include "Trapezio.h"
#include "Triangulo.h"
int main(){

	//--------AREA DO CIRCULO-------
	Circulo *circulo = new Circulo();
	circulo->calcularArea();

	//--------AREA DO QUADRADO-------
	Quadrado *quadrado = new Quadrado();
	quadrado->calcularArea();

	//--------AREA DO RETANGULO-------
	Retangulo *retangulo = new Retangulo();
	retangulo->calcularArea();

	//--------AREA DO TRAPEZIO-------
	Trapezio *trapezio = new Trapezio();
	trapezio->calcularArea();

	//--------AREA DO TRIANGULO-------
	Triangulo *triangulo = new Triangulo();
	triangulo->calcularArea();

	return 0;
}
