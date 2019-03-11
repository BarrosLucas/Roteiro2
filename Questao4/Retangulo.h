/*
 * Retangulo.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef RETANGULO_H_
#define RETANGULO_H_

#include "FiguraGeometrica.h"

class Retangulo : public FiguraGeometrica{
public:
	Retangulo();

	void calcularArea();

	virtual ~Retangulo();
};

#endif /* RETANGULO_H_ */
