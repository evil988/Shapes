#include "Quadrado.h"

Quadrado::Quadrado(string nome, float lado):Quadrilatero(nome, lado, lado, lado, lado){
	setLado(lado);
}

float Quadrado::area(){
	float area = getLado()*getLado();
	return area;
}

void Quadrado::setLado(float lado){
	this->lado = lado;
}

float Quadrado::getLado(){
	return this->lado;
}
