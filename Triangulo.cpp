#include "Triangulo.h"

Triangulo::Triangulo(string nome, float lado1, float lado2, float lado3):Forma(nome){
	setLado1(lado1);
	setLado2(lado2);
	setLado3(lado3);
	setTipo(tipoTriangulo(lado1, lado2, lado3));
}

float Triangulo::perimetro(){
	float perimetro = getLado1()+getLado2()+getLado3();
	return perimetro;
}

float Triangulo::area(){
	float area;
	
	if( getTipo() == "equilatero" ){
		
		area = 0.4330127019*getLado1()*getLado1();
		
	}else{
		if( getTipo() == "isosceles" ){
			float v[3] = {getLado1(), getLado2(), getLado3()};
			float menor = v[0];
			float maior = v[0];
			for(int c=0; c<3; c++){
				if(menor>v[c]){
					menor = v[c];
				}
				if(maior<v[c]){
					maior = v[c];
				}
			}
			
			area = (maior*( sqrt( (menor*menor)-( (0.5*maior)*(0.5*maior) ) ) ))/2;
			
		}else{
			
			if( getTipo() == "escaleno" ){
					
				area = 0.5*getLado2()*getLado3()*sin(getLado1()*PI/180);
			
			}			
		}		
	}	
	return area;
}

string Triangulo::tipoTriangulo(float lado1, float lado2, float lado3){
	string tipo = "";
	
	if( (getLado1()==getLado2()) && (getLado1()==getLado3()) ){
			
		tipo = "equilatero";
		
	}else{
		if( ( (getLado1()==getLado2()) && (getLado1()!=getLado3() ) ) || ( (getLado3()==getLado2()) && (getLado1()!=getLado3() ) ) || ( (getLado1()==getLado3()) && (getLado1()!=getLado2() ) ) ){			
			
			tipo = "isosceles";
			
		}else{
			
			if( (getLado1()!=getLado2()) && (getLado1()!=getLado3()) && (getLado3()!=getLado2()) ){
					
				tipo = "escaleno";
			
			}			
		}		
	}
		
	return tipo;
}

void Triangulo::setTipo(string tipo){	
	this->tipo = tipo;
}

void Triangulo::setLado1(float lado1){
	this->lado1 = lado1;
}

void Triangulo::setLado2(float lado2){
	this->lado2 = lado2;
}

void Triangulo::setLado3(float lado3){
	this->lado3 = lado3;
}

string Triangulo::getTipo(){
	return this->tipo;
}

float Triangulo::getLado1(){
	return this->lado1;
}

float Triangulo::getLado2(){
	return this->lado2;
}

float Triangulo::getLado3(){
	return this->lado3;
}
