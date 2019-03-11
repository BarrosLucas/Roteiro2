/*
 * Trapezio.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef TRAPEZIO_H_
#define TRAPEZIO_H_

#include "FiguraGeometrica.h"

class Trapezio : public FiguraGeometrica{
public:
	Trapezio();

	void calcularArea();

	virtual ~Trapezio();
};

#endif /* TRAPEZIO_H_ */
