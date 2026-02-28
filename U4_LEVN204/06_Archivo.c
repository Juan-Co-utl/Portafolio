#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
r -solo lectura,
w -escribir, remplazar
a -escribir, agregar
r+t -leer y escribir, remplazar
a+t -leer y escribir, agregar
*/


int main(){
    setlocale(LC_ALL,"");
    FILE *miArchivo=fopen("datos02.txt","r");
    if(miArchivo !=NULL){
        char caracter=fgetc(miArchivo);
        while(!feof(miArchivo)){
            printf("%c",caracter);
            caracter=fgetc(miArchivo);
        }
        fclose(miArchivo);
    }else{
        exit(1);
    }
}
