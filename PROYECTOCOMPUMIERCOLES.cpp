*
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
    cout << "Este programa te ayuda a obtener valores de resistencias, voltajes y corrientes" <<endl;
    cout<<"¿Deseas hacer un análisis de circuito o deseas sacar una resistencia equivalente?"<<endl;
    cout<<"Si deseas hacer un análisis de circuito escribe c y si deseas obtener una resistencia equivalente escribe r"<<endl;
    scanf("%c", &k);
    if (k== 'r' ) {
        char h;
        cout << "¿Desear sumar resistencias en paralelo o en serie?" << endl;
        cout << "Si deseas sumar resistencias en paralelo escribe la letra p y en el caso contrario escribe la letra s"
             << endl;
        cin >> h;
        if (h == 'p') {
            vector<int> myVector;
            int rs;
            cout << "Ingresa el número de reistencias a sumar" << endl;
            cin >> rs;
            int input = 0;
            for (int i = 1; i < rs; i++)
            {
                int input;
                myVector.push_back(input);
                cin >> input;
            }
            for (int i = 1; i < rs; i++)
            {
                cout << myVector[i] << endl;
            }
            }
            //cout << divisor1 << endl;
           // float resultadoparcial;
           // resultadoparcial = (1 / divisor1);
            //cout << "El resultado de la suma de resistencias en paralelo de este ciclo es " << resultadoparcial<< endl;
            cout << "¿Desea almacenar ese valor para utilizarlo más tarde?" << endl;
        }
    return 0;
            }


