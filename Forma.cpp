#include "Forma.h"

Forma::Forma(string nome){
	setNome(nome);
}

void Forma::setNome(string nome){
	this->nome = nome;
}

string Forma::getNome(){
	return this-> nome;
}
