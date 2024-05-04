/*
    Nombre del programa: Secuencia de sumatorias
    --------------------------------------------
    Descripción
     Este programa calcula y muestra los términos de una sucesión numérica basada en la fórmula matemática 
     (n(n+1)(2n+1))/6
     El usuario debe ingresar un número entero positivo que servirá como el valor máximo para calcular los términos de la sucesión.
     Los términos calculados se muestran en la consola, separados por comas, y el programa espera una tecla antes de finalizar para que el usuario pueda leer los resultados.

     Autor: Verónica Mejía López
     Fecha: 01/05/2024
*/

#include <stdio.h>

// Función para calcular un término de la sucesión usando la fórmula matemática dada
int calcular_termino(int n) {
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    int valor_iterativo, n, resultado_secuencial;

    printf("Ingrese el número máximo de n (debe ser un entero positivo): ");
    scanf("%d", &valor_iterativo);

    if (valor_iterativo <= 0) {
        printf("Por favor, ingrese un número mayor que cero.\n");
        return 1;
    }

    printf("Los términos de la sucesión son: ");

    for (n = 1; n <= valor_iterativo; n++) {
        resultado_secuencial = calcular_termino(n);
        printf("%d", resultado_secuencial);

        if (n < valor_iterativo) {
            printf(", ");
        }
    }

    printf("\nPresione cualquier tecla para continuar...\n");
    getchar();
    getchar();

    return 0;
}

