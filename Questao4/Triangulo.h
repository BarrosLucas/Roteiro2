/*
 * Triangulo.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef TRIANGULO_H_
#define TRIANGULO_H_

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{
public:
	Triangulo();

	void calcularArea();

	virtual ~Triangulo();
};

#endif /* TRIANGULO_H_ */
