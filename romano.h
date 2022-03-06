/**
 * @file romano.h 
 * @brief The program covert decimal number into roman number. The program was written in C++ 
 *
 * @author Wilson Javier Almario Rodriguez
 * @date July - 2015
 * @update: 6/03/2022
 */

#ifndef ROMANO_H
#define ROMANO_H
#include <string>
#include <math.h>

using namespace std;

class Romano
{
	private:
        string numero_romano="";

	public:
		Romano();
        int cuenta_digitos(int x,int c,int aux);
        int multiplicador(int x,int c);
        void buscar_numero(int x);
        void conversion(int x);
        void imprimir();
        int valida_entrada();
        int valida_entrada_f();
};



#endif
