/*
 * PROGRAMA ELECTRÓNICA
 * Autores: García Piña José de Jesús, Ortega Penagos Oscar, Caballero López Alonso
 * 20/10/2021
 */
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;
int main() {
    char k;
    cout << "Este programa te ayuda a obtener valores de resistencias, voltajes y corrientes" << endl;
    cout << "¿Deseas hacer un análisis de circuito o deseas sacar una resistencia equivalente?" << endl;
    cout<< "Si deseas hacer un análisis de circuito escribe c y si deseas obtener una resistencia equivalente escribe r"<< endl;
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
                cout << "Ingresa el valor de la resistencia " << i + 1 <<" en Ohms"<<endl;
                cin >> valorresistenciasparalelo;
                resistencias.push_back(valorresistenciasparalelo);
                totaldenominador *= resistencias[i];

            }
            for (int i = 0; i <rs ; ++i) {
                totalnumerador+=(totaldenominador/resistencias[i]);
            }
            cout <<"El valor del total denominador es "<<totaldenominador<<endl;
            cout<<"El valor del total numerador es "<<totalnumerador<<endl;
            resistenciasequivalente=(1/(totalnumerador/totaldenominador));
            cout<<"La resistencia equivalente es igual "<<resistenciasequivalente<<" Ohms"<<endl;
            cout<<"¿Deseas utilizar esta resistencia para hacer otro cálculo?"<<endl;
            cout<<"Pon una s si es así o una n si no es el caso"<<endl;
            char respuesta;
            cin>>respuesta;
            if(respuesta=='s'){
                char voltajeocorriente;
                cout<<"¿Qué deseas hacer? Calcular el voltaje o la corriente que pasa por la Re"<<endl;
                cout<<"Para obtener el voltaje escribe la letra v y para corriente la letra i"<<endl;
                cin>>voltajeocorriente;
                if (voltajeocorriente=='v'){
                    float intensidaddada;
                    cout<<"Ingrese una corriente en Amperes"<<endl;
                    cin>>intensidaddada;
                    cout<<"El voltaje de la resistencia y la corriente dada es igual a "<<intensidaddada*resistenciasequivalente<<" Volts"<<endl;
                }
                else{
                    float voltajedado;
                    cout<<"Ingrese el voltaje correspondiente"<<endl;
                    cin>>voltajedado;
                    cout<<"La corriente que pasa por la Re es "<<voltajedado/resistenciasequivalente<<"Amperes"<<endl;
                }
            } else{
            }
        }
        else{
            int numeroresistenciasenserie;
            cout<<"Ingrese la cantidad de resistencias que vas a sumar en serie"<<endl;
            cin>>numeroresistenciasenserie;
            vector<float> resistenciasserie;
            float valordelasreistencias;
            float resistenciasenserie;
            for (int i = 0; i <numeroresistenciasenserie ; ++i) {
                cout<<"Ingresa el valor de la resistencia "<< i+1<<" en Ohms"<<endl;
                cin>>valordelasreistencias;
                resistenciasserie.push_back(valordelasreistencias);
                resistenciasenserie+=resistenciasserie[i];
            }
            cout<<"El valor de la suma de las resistencias en series es "<<resistenciasenserie<<endl;
            cout<<"¿Desea usar este valor de resistencia para calcular voltaje o corriente?"<<endl;
            char respuestasiono;
            cout<<"Escriba una s sí lo quiere o n en el caso que no"<<endl;
            cin>>respuestasiono;
            if (respuestasiono=='s'){
                char voltajeocorriente;
                cout<<"¿Que desea obtener corriente o voltaje?"<<endl;
                cout<<"En el caso de querer obtener un voltaje escriba v y en el caso de la corriente escriba i"<<endl;
                cin>>voltajeocorriente;
                if (voltajeocorriente='v'){
                    float corrientedada;
                    cout<<"Ingrese la corriente"<<endl;
                    cin>>corrientedada;
                    cout<<"El voltaje en este caso es igual a "<<corrientedada*resistenciasenserie<<" Volts"<<endl;
                }else{
                    float voltajedado;
                    cout<<"Ingrese el voltaje correspondiente"<<endl;
                    cin>>voltajedado;
                    cout<<"La corriente en Re es igual a "<<voltajedado/resistenciasenserie<<" Amperes"<<endl;
                }
            }
        }
    } else{
        char LKCOLVK;
cout<<"¿Desea utilizar LVK o LCK?"<<endl;
cout<<"Ingrese 'c' para LKC o ´v´ para LCK "<<endl;
cin>>LKCOLVK;
        if (LKCOLVK=='c'){
            int cantidaddenodos;
            cout<<"Has elegido usar LCK"<<endl;
            cout<<"Ingresa la cantidad de nodos"<<endl;
            cin>>cantidaddenodos;

        } else{
            cout<<"Has elegido usar LVC"<<endl;
        }
    }
    return 0;
}
