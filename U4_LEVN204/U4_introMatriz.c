#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc,char *argv[]){
    setlocale(LC_ALL,"");
    int matriz[4][4];
    int f,c;
    for(f=0;f<=4;f++){
        for(c=0;c<=4;c++){
            printf("Ingrese el valor de la fila %d y la columna %d :",f,c);
            scanf("%d",&matriz[f][c]);
        }
    }
    system("Pause");
    system("cls");
     for(f=0;f<=4;f++){
        for(c=0;c<=4;c++){
           printf("%d \t",matriz[f][c]);
        }
        printf("\n");
    }
    system("Pause");
    return 0;
}
