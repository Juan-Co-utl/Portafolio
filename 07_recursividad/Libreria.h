#ifndef LIBRERIA_H_PRUEBA
#define LIBRERIA_H_PRUEBA

#include "libreria.h"

#endif // LIBRERIA_H_PRUEBA
int potenciar(int b, int e){
    int p;
    if(e==0){
        p=1;
    }else{
        p=b*potenciar(b,e-1);

    }
    return p;

}

int main2(){
    int base=solicitarNum();
    int exponente=solicitarNum

    printf("%d",potenciar(base, exponente))

}
