#ifndef CIRCULO_H
#define CIRCULO_H

#include "Forma.h"

class Circulo : public Forma{
	private:
		float raio;
		
	public:
		Circulo(string nome, float raio);
		
		float perimetro();
		float area();
		
		void setRaio(float raio);
		
		float getRaio();	
};
#endif
