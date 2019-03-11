/*
 * Circulo.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{
public:
	Circulo();

	void calcularArea();

	virtual ~Circulo();
};

#endif /* CIRCULO_H_ */
