/*
 * Quadrado.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef QUADRADO_H_
#define QUADRADO_H_

#include "FiguraGeometrica.h"

class Quadrado :public FiguraGeometrica{
public:
	Quadrado();

	void calcularArea();

	virtual ~Quadrado();
};

#endif /* QUADRADO_H_ */
