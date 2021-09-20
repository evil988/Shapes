#ifndef FORMA_H
#define FORMA_H
#define PI 3.141592654

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Forma{
	
	private:
		string nome;
		
	public:
		Forma(string nome);
		
		void setNome(string nome);
		
		string getNome();		
		
		virtual float perimetro()=0;
		virtual float area()=0;
};
#endif
