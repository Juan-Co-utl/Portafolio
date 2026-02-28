#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*Fabrica salarios de empleados
matutino, vespertino 4 alumnos
identificar el total de salario por turno.
*/

int main(){
    setlocale(LC_ALL,"");
    float turnoMat[4];
    float turnoVesp[4];
    float mat=0, vesp=0;

    printf("Sueldos MATUTINO::::: \n");
    for(int i=0;i<4;i++){
        printf("Ingresa sueldo: ");
        scanf("%f", &turnoMat[i]);
    }
    printf("Sueldos VESPERTINO::::: \n");
    for(int i=0;i<4;i++){
        printf("Ingresa sueldo: ");
        scanf("%f", &turnoVesp[i]);
        //vesp+=turnoVesp[i];
    }
    for(int i=0;i<4;i++){
        mat+=turnoMat[i];
        vesp+=turnoVesp[1];
    }
    printf("Salarios \n \tMatutinos: %f.2\n \tVespertinos: %f.2 ",mat, vesp);

}
