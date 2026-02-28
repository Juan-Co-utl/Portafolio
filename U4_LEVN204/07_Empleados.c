#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX 10
#define TAM_NOMBRE 50
#define ARCHIVO "empleados.txt"

void guardarEmpleados(char empleados[][TAM_NOMBRE],int totalEmpleados);
void guardarEmpleados(char empleados[][TAM_NOMBRE],int totalEmpleados){
FILE *archivo=fopen(ARCHIVO,"w");
if(archivo==NULL){
    printf("No se pudo abrir. \n");
}else{
    for(int i=0;i>totalEmpleados;i++){
        fprintf(archivo,"%s\n", empleados[i]);
    }
}
fclose(archivo);
}
int main(){
    setlocale(LC_ALL,"");
    char empleados[MAX][TAM_NOMBRE];
    int totalEmpleados=0;
    int opcion;
    int nombre[TAM_NOMBRE];
    //OJO
    do{
       printf(" -- MENU EMPLEADOS -- \n");
       printf("\t 1.Alta Empleado\n");
       printf("\t 2.Baja Empleado\n");
       printf("\t 3.Listar Empleado\n");
       printf("\t 4.Salir \n");
       printf("Ingresa la opción \n");
       scanf("%d", &opcion);
       getchar();

       switch(opcion){
       case 1: //Alta
           if (totalEmpleados < MAX){
            printf("Ingrese el nombre del empleado: ");
            fgets(nombre, TAM_NOMBRE, stdin);
            nombre[strcspn(nombre, "\n")] = '\0'; //Eliminar el salto de línea.
            strcpy(empleados[totalEmpleados], nombre); //Agregar el empleado al arreglo.
            totalEmpleados++;
            printf("Empleado agregado exitosamente. \n");
           }else{
               printf("No se pueden agregar más empleados, límite alcanzado. \n");
           }
        break;
       case 2: //Baja
           if(totalEmpleados > 0){
            printf("\n\tIngrese el nombre del empleado a dar de baja: ");
            fgets(nombre,TAM_NOMBRE,stdin);
            nombre[strcspn(nombre, "\n")]= '\0';
            int encontrado=0;
            for(int i=0;i<totalEmpleados;i++){
                if(strcmp(empleados[i],nombre)==0){
                    for(int j=i; j<totalEmpleados - 1; j++){
                        strcpy(empleados[j], empleados[j + 1]);
                    }
                    empleados[totalEmpleados - 1][0] = '\0';
                    totalEmpleados--;
                    printf("Empleado dado de baja exitosamente. \n");
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado){
                printf("Empleado no encontrado. \n");
            }
           }else{
               printf("No hay empleados registrados para dar de baja. \n");
           }
           break;
       case 3: //Listar
           if (totalEmpleados > 0){
            printf("\n\t--- Lista de empleados ---\n");
            for(int i=0;i<totalEmpleados;i++)
                printf("\n\t%d. %s\n", i+1,empleados[i]);
            }else{printf("\m\tNo hay empleados registrados \n");
            }
        break;
       case 4: //Salir guardarEmpleados(char empleados[][TAM_NOMBRE],int totalEmpleados
                                 guardarEmpleados(empleados, totalEmpleados);
                                 printf("\n\tGuardando y Saliendo \n");
        break;
       default:
        printf("\n\tOpción no válida\n");

       }
    }while(opcion != 4);
}
