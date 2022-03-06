/**
 * @file romano.cpp 
 * @brief The program covert decimal number into roman number. The program was written in C++ 
 *
 * @author Wilson Javier Almario Rodriguez
 * @date July - 2015
 * @update: 6/03/2022
 */


#include <iostream>
#include "romano.h"
#include <string>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

Romano::Romano(){

};

int Romano::cuenta_digitos(int x,int c,int aux){

    if(aux==0){
        return c-1;
    }else{
        aux=x/pow(10,c);
        c++;
        return cuenta_digitos(x,c,aux);
    };
};

int Romano::multiplicador(int x,int c){
    int aux=0;
    double aux2=0;
    aux=x/pow(10,c);
    //cout<<aux<<endl;
    aux2 = pow(10,c);
    return x=aux*aux2;
};

void Romano::buscar_numero(int x){
    string num_rom;
    int aux=0;

    if(x==1){
        num_rom = "I";
        numero_romano = numero_romano+num_rom;
    };

    if((1<x)&&(x<4)){
        aux=1;
        num_rom="I";
        while(aux<=x){
            numero_romano=numero_romano+num_rom;
            aux++;
        };
    };

    if(x==4){
        num_rom = "IV";
        numero_romano = numero_romano+num_rom;
    };

    if(x==5){
        num_rom = "V";
        numero_romano = numero_romano+num_rom;
    };

    if((5<x)&&(x<9)){
        aux=6;
        numero_romano=numero_romano+"VI";
        num_rom="I";
        while(aux<x){
            numero_romano=numero_romano+num_rom;
            aux++;
        };
    };

    if(x==9){
        num_rom = "IX";
        numero_romano = numero_romano+num_rom;
    };

    if(x==10){
        num_rom = "X";
        numero_romano = numero_romano+num_rom;
    };

    if((10<x)&&(x<40)){
        aux=10;
        num_rom="X";
        numero_romano=numero_romano+num_rom;
        while(aux<x){
            numero_romano=numero_romano+num_rom;
            aux+=10;
        };
    };
    if(x==40){
        num_rom = "XL";
        numero_romano = numero_romano+num_rom;
    };

    if(x==50){
        num_rom = "L";
        numero_romano = numero_romano+num_rom;
    };

    if((50<x)&&(x<90)){
        aux=60;
        num_rom="X";
        numero_romano=numero_romano+"LX";

        while(aux<x){
            numero_romano=numero_romano+num_rom;
            aux+=10;
        };
    };

    if(x==90){
        num_rom = "XC";
        numero_romano = numero_romano+num_rom;
    };

    if(x==100){
        num_rom = "C";
        numero_romano = numero_romano+num_rom;
    };


    if((100<x)&&(x<400)){
        aux=100;
        numero_romano=numero_romano+"C";
        num_rom="C";
        while(aux<x){
            numero_romano=numero_romano+num_rom;
            aux+=100;
        };
    };

    if(x==400){
        num_rom = "CD";
        numero_romano = numero_romano+num_rom;
    };

    if(x==500){
        num_rom = "D";
        numero_romano = numero_romano+num_rom;
    };

    if((500<x)&&(x<900)){
        aux=600;
        num_rom="C";
        numero_romano=numero_romano+"DC";
        while(aux<x){
            numero_romano=numero_romano+num_rom;
            aux+=100;
        };
    };

    if(x==900){
        num_rom = "CM";
        numero_romano = numero_romano+num_rom;
    };

    if(x==1000){
        num_rom = "M";
        numero_romano = numero_romano+num_rom;
    };
    if((1000<x)&&(x<4000)){
        aux=1000;
        num_rom="M";
        while(aux<=x){
            numero_romano=numero_romano+num_rom;
            aux+=1000;
        };
    };
};

void Romano::conversion(int x){

    int num_digitos=0,numero=0;
    num_digitos=cuenta_digitos(x,num_digitos,1);
    while(0<num_digitos){
            numero = multiplicador(x,num_digitos-1);
            x=x-numero;
            buscar_numero(numero);
            num_digitos--;
    };
};
void Romano::imprimir(){
    cout<<"NUMERO ROMANO: "<<numero_romano<<endl;
};
int  Romano::valida_entrada(){
       int numero, cont = 0;//Variables
       bool continuar;
       do {
          continuar = false;
          cin.clear();
          if(cont > 0) cin.ignore(1024, '\n');
          cout << "Digite el numero: ";
          cin >> numero;
          cont++;
          if(cin.fail() && cin.rdstate()){
             cout << "NO ES UN NUMERO, intente de nuevo" << endl <<endl;
             continuar = true;
          }
       } while (continuar);
       return numero;
};
int  Romano::valida_entrada_f(){
       int numero, cont = 0;//Variables
       bool continuar;
       do {
          continuar = false;
          cin.clear();
          if(cont > 0) cin.ignore(1024, '\n');
          cin >> numero;
          cont++;
          if(cin.fail() && cin.rdstate()){
             cout << "NO ES UN NUMERO, intente de nuevo" << endl <<endl;
             continuar = true;
          }
       } while (continuar);
       return numero;
};
