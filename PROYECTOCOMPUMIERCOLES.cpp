/*
 * PROGRAMA ELECTRÓNICA
 * Autores: García Piña José de Jesús, Ortega Penagos Oscar, Caballero Lopez Alonso
 * 20/10/2021
 */
#include <iostream>
#include <array>
#include <math.h>
using namespace std;
int main() {
    cout << "Este programa te ayuda a obtener valores de resistencias, voltajes y corrientes" <<endl;
    cout<<"¿Deseas hacer un análisis de circuito o deseas sacar una resistencia equivalente?"<<endl;
    cout<<"Si deseas hacer un análisis de circuito escribe 1 y si deseas obtener una resistencia equivalente escribe 2"<<endl;
   int Opccion;
    cin>>Opccion;
    if (Opccion=2){ //Aquí en ves del if podemos utilizar un switch para utilizar texto en vez de números.
        int size; //Números de resistencias
        cout<<"¿Cuantas resistencias tienes"<<endl;
        cin>>size;
        //Hay que hacer un arreglo que guarde aquí los valores de n cantidad de resistencias.

            }

    return 0;

    }
