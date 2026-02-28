#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
Frase contar vocales
*/

int main(){
    setlocale(LC_ALL,".utf8");
    char frase[50];
    int cantVocal=0, x=0;
    printf("Ingresa una frase: ");
    gets(frase);

    while(frase[x] != '\0'){
            if(frase[x]=='a' || frase[x]=='e' || frase[x]=='i' || frase[x]=='o' || frase[x]=='u' || frase[x]=='A' || frase[x]=='E' || frase[x]=='I' || frase[x]=='O' || frase[x]=='U')
            cantVocal++;
    x++;

    }
    printf("\n %i vocales en %s \n", cantVocal,frase);
}
