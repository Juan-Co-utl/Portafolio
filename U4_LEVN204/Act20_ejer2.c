#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUM_ALUMNOS 5
#define NUM_MATERIAS 5
#define APROBACION_MINIMA 6

int main() {
    setlocale(LC_ALL,"");
    char alumnos[NUM_ALUMNOS][50];
    int calificaciones[NUM_ALUMNOS][NUM_MATERIAS];
    int i, j, desaprobadas;
    for (i = 0; i < NUM_ALUMNOS; i++) {
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        fgets(alumnos[i], sizeof(alumnos[i]), stdin);
        alumnos[i][strcspn(alumnos[i], "\n")] = '\0';
        printf("Ingrese las calificaciones de %s:\n", alumnos[i]);
        for (j = 0; j < NUM_MATERIAS; j++) {
            do {
                printf("Materia %d: ", j + 1);
                scanf("%d", &calificaciones[i][j]);
                if (calificaciones[i][j] < 0 || calificaciones[i][j] > 10) {
                    printf("Calificación inválida. Ingrese un valor entre 0 y 10.\n");
                }
            } while (calificaciones[i][j] < 0 || calificaciones[i][j] > 10);
        }
        getchar();
    }
    printf("\nAlumnos con 2 o más calificaciones desaprobadas:\n");
    for (i = 0; i < NUM_ALUMNOS; i++) {
        desaprobadas = 0;
        for (j = 0; j < NUM_MATERIAS; j++) {
            if (calificaciones[i][j] < APROBACION_MINIMA) {
                desaprobadas++;
            }
        }
        if (desaprobadas >= 2) {
            printf("%s\n", alumnos[i]);
        }
    }

    return 0;
}
