#ifndef QUADRADO_H
#define QUADRADO_H


#include "Quadrilatero.h"

class Quadrado : public Quadrilatero{
	private:
		float lado;
		
	public:
		Quadrado(string nome, float lado);
		
		float area();
		
		void setLado(float lado);
		
		float getLado();
};
#endif
