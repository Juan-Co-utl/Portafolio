#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//#include "libreria.h"

void cuenta(int num);

void cuenta(int num){
    if(num<=0){
        printf("Termino...bye");
    }else{
        printf("%d ",num);
        cuenta(num-1);
    }


}
int factorial(int num){
    int f;
    if(num==0){
        f=1;
    }else{
       f=num*factorial(num-1);
    }
    return f;

}
int main1()

{

    printf("Hello world!\n");
    int x=pedirNumero();
    //cuenta (x);
    int f=factorial(x);
    printf("El factorial de %d: %d", x,f);
    return 0;
}
