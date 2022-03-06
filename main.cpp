/**
 * @file main.cpp 
 * @brief The program covert decimal number into roman number. The program was written in C++ 
 *
 * @author Wilson Javier Almario Rodriguez
 * @date July - 2015
 * @update: 6/03/2022
 */

#include <math.h>
#include <iostream>
#include "romano.h"
#include <string>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
   Romano r;//Creacion del objeto
   bool flag=true;
   int x=0;

    do{

       system("cls");

        cout<<"Desarrollado por: "<<endl; //Inicio de la presentaci�n del progreama
        cout<<"-> Wilson J. Almario R."<<endl;
        cout<<endl;
        cout<<"\t\t     ***********************************  "<<endl;
        cout<<"\t\t     ***                             ***  "<<endl;
        cout<<"\t\t     ***      CONVERSOR NUMEROS      ***  "<<endl;
        cout<<"\t\t     ***      ROMANOS A DECIMAL      ***  "<<endl;
        cout<<"\t\t     ***                             ***  "<<endl;
        cout<<"\t\t     ***********************************  "<<endl<<endl;
        cout<<endl;
        cout<<"\t\t                 INSTRUCCIONES           "<<endl;
        cout<<"\t\t                                         "<<endl;
        cout<<"1.Digite el numero"<<endl;
        cout<<"2.Presione ENTER"<<endl;
        cout<<"3.La aplicacion solo soporta numeros entre 1 y 3999"<<endl<<endl<<endl;


        x=r.valida_entrada();
        r.conversion(x);
        r.imprimir();
        cout<<endl<<"DESEA CONVERTIR OTRO NUMERO?";
        cout<<endl<<"1.SI";
        cout<<endl<<"2.NO"<<endl;;
        x=r.valida_entrada_f();
        if(x==2){
            flag=false;
        }else{
            flag = true;
            x=0;
        };

    }while(flag);
    return 0;
}

