#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int matriz[3][3];
    int fila, columna;
    int valor = 1;
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            matriz[i][j] = valor++;
        }
    }
    printf("Ingrese las coordenadas de la posicion (fila, columna): ");
    scanf("%d %d", &fila, &columna);
    if (fila >= 0 && fila <= 3 && columna >= 0 && columna <= 3) {
        printf("El elemento en la posicion (%d, %d) es: %d\n", fila, columna, matriz[fila][columna]);
    } else {
        printf("Coordenadas fuera de rango. Las filas y columnas deben estar entre 0 y 2.\n");
    }

    return 0;
}
