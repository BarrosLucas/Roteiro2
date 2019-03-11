/*
 * FiguraGeometrica.h
 *
 *  Created on: 11 de mar de 2019
 *      Author: lucas
 */

#ifndef FIGURAGEOMETRICA_H_
#define FIGURAGEOMETRICA_H_

#include <string>

class FiguraGeometrica {
public:
	FiguraGeometrica(std::string nome);

	std::string getNome();
	void setNome(std::string nome);
	virtual void calcularArea() = 0;

	virtual ~FiguraGeometrica();
protected:
	std::string nome;

};

#endif /* FIGURAGEOMETRICA_H_ */
