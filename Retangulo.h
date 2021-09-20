#ifndef RETANGULO_H
#define RETANGULO_H

#include "Quadrilatero.h"

class Retangulo : public Quadrilatero{
	
	private:
		float base, altura;
		
	public:
		Retangulo(string nome, float base, float altura);
		
		float area();
		
		void setBase(float base);
		void setAltura(float altura);
		
		float getBase();
		float getAltura();
};
#endif
