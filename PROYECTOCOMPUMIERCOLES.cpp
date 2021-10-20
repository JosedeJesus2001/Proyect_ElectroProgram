/*
 * PROGRAMA ELECTRÓNICA
 * Autores: García Piña José de Jesús, Ortega Penagos Oscar, Caballero Lopez Alonso
 * 20/10/2021
 */
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;
int main() {
    char k;
    cout << "Este programa te ayuda a obtener valores de resistencias, voltajes y corrientes" << endl;
    cout << "¿Deseas hacer un análisis de circuito o deseas sacar una resistencia equivalente?" << endl;
    cout
            << "Si deseas hacer un análisis de circuito escribe c y si deseas obtener una resistencia equivalente escribe r"
            << endl;
    scanf("%c", &k);
    if (k == 'r') {
        char h;
        cout << "¿Desear sumar resistencias en paralelo o en serie?" << endl;
        cout << "Si deseas sumar resistencias en paralelo escribe la letra p y en el caso contrario escribe la letra s"
             << endl;
        cin >> h;
        if (h == 'p') {
            int rs;
            cout << "Ingresa el número de reistencias a sumar" << endl;
            cin >> rs;
            vector<float> resistencias;
            float valorresistenciasparalelo;
            float totaldenominador=1;
            float totalnumerador=0;
            float resistenciasequivalente;
            for (int i = 0; i < rs; i++) {
                cout << "Ingresa el valor de la resistencia " << i + 1 << endl;
                cin >> valorresistenciasparalelo;
                resistencias.push_back(valorresistenciasparalelo);
                totaldenominador *= resistencias[i];

            }
            for (int i = 0; i <rs ; ++i) {
                totalnumerador+=(totaldenominador/resistencias[i]);
                cout<<totalnumerador<<endl;
            }
            cout <<"El valor del total denominador es "<<totaldenominador<<endl;
            cout<<"El valor del total numerador es "<<totalnumerador<<endl;
        }
    }
    return 0;
}
