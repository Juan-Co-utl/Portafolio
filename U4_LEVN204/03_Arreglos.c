#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*
compara la edad de personas, indica la mayor edad.
*/

int main(){
    setlocale(LC_ALL,".utf8");
    char nombre1[10];
    char nombre2[10];
    int edad1, edad2;
    printf("Ingrese el nombre de la primer persona: ");
    //scanf("%c", &nombre1);
    fgets(nombre1,50,stdin);
    printf("Ingresa su edad: ");
    scanf("%d", &edad1);

    fflush(stdin);

    printf("Ingrese el nombre de la segunda persona: ");
    fgets(nombre2,50,stdin);
    printf("Ingresa su edad: ");
    scanf("%d", &edad2);
    fflush(stdin);

    if(edad1>edad2)
        printf("\n %s es mayor \n", nombre1);
    else if(edad2>edad1)
        printf("\n %s es mayor \n", nombre2);
    else
        printf("\n misma edad \n");




    printf("\n %s \n",nombre1);
    printf("\n %s \n",nombre2);

    /*printf("Ingrese el nombre de la segunda persona");
    scanf("%c", &nombre2);
    */
    return 0;
}
