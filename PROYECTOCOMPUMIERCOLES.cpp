/*
 * PROGRAMA ELECTRÓNICA
 * Autores: García Piña José de Jesús, Ortega Penagos Oscar, Caballero Lopez Alonso
 * 20/10/2021
 */
#include <iostream>
#include <array>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
    char k;
    cout << "Este programa te ayuda a obtener valores de resistencias, voltajes y corrientes" <<endl;
    cout<<"¿Deseas hacer un análisis de circuito o deseas sacar una resistencia equivalente?"<<endl;
    cout<<"Si deseas hacer un análisis de circuito escribe c y si deseas obtener una resistencia equivalente escribe r"<<endl;
    scanf("%c", &k);
    if (k== 'r' ){
        char h;
        cout<<"¿Desear sumar resistencias en paralelo o en serie?"<<endl;
        cout<<"Si deseas sumar resistencias en paralelo escribe la letra p y en el caso contrario escribe la letra s"<<endl;
        cin>>h;
        if (h=='p'){
            int rs;
            cout<<"Ingresa el número de reistencias a sumar"<<endl;
            cin>>rs;
            int contador1=1;
            int almacenar1;
            float ayuda=0;
            float divisor1;
            float divisor2;
            while (contador1<rs+1){
                cout<<"Ingrese el valor de su resistencia "<<contador1<<endl;
                cin>>almacenar1;
                contador1=contador1+1;
                divisor1=(1/almacenar1);
                divisor1=(divisor1)+(1/almacenar1);


            }
            cout<<divisor1<<endl;
            float resultadoparcial;
            resultadoparcial=(1/divisor1);
            cout<<"El resultado de la suma de resistencias en paralelo de este ciclo es "<<resultadoparcial<<endl;
            cout<<"¿Desea almacenar ese valor para utilizarlo más tarde?"<<endl;

        }

                }



    return 0;

    }


