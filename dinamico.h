#ifndef DINAMICO_H
#define DINAMICO_H
#include <iostream>
using namespace std;

class Dinamico
{
	int*dinamico;
	size_t tam;
	size_t cont;
	const static size_t MAX=5;
	public:
		Dinamico();
	   ~Dinamico();
	   void insertar_inicio(int f);
	   void insertar_final(int f);
	   size_t size();
	   int operator[](size_t o)
	   {
	   	return dinamico[o];
	   }
	private:
		void expandir();
};

#endif
