#include "dinamico.h"
#include <iostream>

Dinamico::Dinamico(){
	dinamico=new int[MAX];
	cont=0;
	tam=MAX;
}
Dinamico::~Dinamico(){
	delete[] dinamico;
}
void Dinamico::insertar_inicio(int f){
	if(cont==tam){
		expandir();
	}
	for(size_t i=cont; i>0; i--){
		dinamico[i]=dinamico[i-1];
	
	}
	dinamico[0]=f;
	cont++;
}
void Dinamico::insertar_final(int f){
	if(cont==tam){
		expandir();
	}
	
	dinamico[cont]=f;
	cont++;
}

size_t Dinamico::size(){
	return cont;
}

void Dinamico::expandir(){
	int *nuevo=new int [tam+MAX];
	for(size_t i=0; i<cont; i++){
		nuevo[i]=dinamico[i];
	}
	
	delete[] dinamico;
	dinamico=nuevo;
	tam=tam+MAX;
}

