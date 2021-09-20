#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Forma.h"
class Triangulo : public Forma{
	private:
		float lado1, lado2, lado3;
		string tipo;
		
	public:
		Triangulo(string nome, float lado1, float lado2, float lado3);
		
		float perimetro();
		float area();
		string tipoTriangulo(float lado1, float lado2, float lado3);
		
		void setTipo(string tipo);
		void setLado1(float lado1);
		void setLado2(float lado2);
		void setLado3(float lado3);
		
		string getTipo();
		float getLado1();
		float getLado2();
		float getLado3();
};
#endif
