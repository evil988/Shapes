#include "Retangulo.h"

Retangulo::Retangulo(string nome, float base, float altura):Quadrilatero(nome, base, base, altura, altura){
	setBase(base);
	setAltura(altura);
}

void Retangulo::setBase(float base){
	this-> base = base;
}

float Retangulo::area(){
	float area = getBase()*getAltura();
	return area;
}

void Retangulo::setAltura(float altura){
	this-> altura = altura;
}

float Retangulo::getBase(){
	return this->base;
}

float Retangulo::getAltura(){
	return this->altura;
}
