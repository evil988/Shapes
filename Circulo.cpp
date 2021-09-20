#include "Circulo.h"

Circulo::Circulo(string nome, float raio):Forma(nome){
	setRaio(raio);
}

float Circulo::perimetro(){
	float circunferencia = 2*PI*getRaio();
	return circunferencia;
}

float Circulo::area(){
	float area = getRaio()*getRaio()*PI;
	return area;
}

void Circulo::setRaio(float raio){
	this-> raio = raio;
}

float Circulo::getRaio(){
	return this->raio;
}
