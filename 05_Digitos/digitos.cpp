#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if (b ==0){throw 1;}//error 1: no existe la division por 0
    if (b<a){return 0;}
    return 1 + cociente (a-b, b);
}


unsigned int resto(unsigned int a, unsigned int b) {
    if (b==0){throw 1;}//error 1: no existe la division por 0
    if (b<a){return b;}
    return cociente (a-b, b);
}


void escribir_espaciado(unsigned int num) {
    if (num == 0){cout<<"";}
    else {
        escribir_espaciado (num/10);
        cout<<num % 10<<"";
    }
}
