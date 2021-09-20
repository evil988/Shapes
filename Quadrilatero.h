#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include "Forma.h"

class Quadrilatero : public Forma{
	
	private:		
		float lado1, lado2, lado3, lado4;
		
	public:
		Quadrilatero(string nome, float lado1, float lado2, float lado3, float lado4);
		
		float perimetro();
		
		void setLado1(float lado1);
		void setLado2(float lado2);
		void setLado3(float lado3);
		void setLado4(float lado4);		
		
		float getLado1();
		float getLado2();
		float getLado3();
		float getLado4();			
};
#endif
