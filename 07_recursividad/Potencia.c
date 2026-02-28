#include <stdio.h>
#include <stdlib.h>
#include "libreria_h.h"

int potenciar(int b, int e);
int potenciar(int b, int e){
    int p;
    if(e==0){
        p=1;
    }else{
        p=b*potenciar(b,e-1);

    }
    return p;

}
int main(){
      int base=pedirNumero();

     int exponente=pedirNumero();

    printf("%d",potenciar(base, exponente));

}
