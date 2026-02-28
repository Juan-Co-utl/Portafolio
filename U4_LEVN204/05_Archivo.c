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
    FILE *miArchivo=fopen("datos01.txt","r");
    if(miArchivo != NULL){
        printf("SI se pudo abrir -01-\n");
    }else{
        printf("NO se pudo abrir -01-\n");
    }

    FILE *miArchivo2=fopen("datos02.txt","w");
    if(miArchivo2 != NULL){
        printf("SI se pudo abrir -02-\n");
        fputs("Primer línea \n",miArchivo2);
        fputs("Segunda línea \n",miArchivo2);
        fputs("Tercera línea \n",miArchivo2);
        fclose(miArchivo2);
    }else{
        printf("NO se pudo abrir -02-\n");
    }

}
