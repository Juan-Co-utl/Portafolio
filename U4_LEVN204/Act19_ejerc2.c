#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float calificaciones[8];
    float suma = 0.0;
    float promedio;
    for(int i = 0; i < 8; i++) {
        printf("Ingrese la calificación #%d: ", i + 1);
        scanf("%f", &calificaciones[i]);
    }
    printf("\nLas calificaciones ingresadas son:\n");
    for(int i = 0; i < 8; i++) {
        printf("Calificación #%d: %.2f \n", i + 1, calificaciones[i]);
        suma += calificaciones[i];
    }
    promedio = suma / 8;
    printf("\n El promedio de las calificaciones es: %.2f \n", promedio);

    return 0;
}
