#include "Quadrilatero.h"

Quadrilatero::Quadrilatero(string nome, float lado1, float lado2, float lado3, float lado4):Forma(nome){	
	setLado1(lado1);
	setLado2(lado2);
	setLado3(lado3);
	setLado4(lado4);
}

float Quadrilatero::perimetro(){
	float perimetro = getLado1()+getLado2()+getLado3()+getLado4();
	return perimetro;
}

void Quadrilatero::setLado1(float lado1){
	this-> lado1 = lado1;
}

void Quadrilatero::setLado2(float lado2){
	this-> lado2 = lado2;
}

void Quadrilatero::setLado3(float lado3){
	this-> lado3 = lado3;
}

void Quadrilatero::setLado4(float lado4){
	this-> lado4 = lado4;
}

float Quadrilatero::getLado1(){
	return this->lado1;
}

float Quadrilatero::getLado2(){
	return this->lado2;
}

float Quadrilatero::getLado3(){
	return this->lado3;
}

float Quadrilatero::getLado4(){
	return this-> lado4;
}
