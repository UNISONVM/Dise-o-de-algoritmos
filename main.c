/*
 Nombre del programa: Depreciación Anual y Depreciación cumulada de un Automóvil
 -------------------------------------------------------------------------------
 Descripción:
 Este programa calcula y muestra la depreciación anual y depreciación acumulada de un automóvil
 durante los años posteriores a su compra, utilizando el método de depreciación de línea recta y
 considerando una tasa del 25% de acuerdo al articulo 34 fracción V de la LISR.

 Entradas:
 - valor_inicial: Costo inicial del automóvil, MOI o Monto Original de Inversión
 - valor_residual: Valor estimado de recuperación o residual del automóvil al final de la vida útil.
 - vida_util: Número estimado de años de uso del automóvil.
 - depreciacion_anual: Cantidad fija que se depreciará cada año.

 Salidas:
 - Tabla de depreciación impresa en la consola que muestra por cada año el valor de depreciación
    acumulada y el valor real del automóvil.

 Autor: Veronica Mejia Lopez
 Fecha: 04/04/2024
 */

#include <stdio.h>

int main() {
    //Variables a utilizar
    float valor_inicial, valor_residual, depreciacion_anual;
    int ano_inicio, ano_final, ano_actual;

    // Registro de captura del primer año en que se empieza a reducir el valor del automovil
    printf("Ingrese el valor inicial del automovil (MOI): ");
    scanf("%f", &valor_inicial);

    // Registro de captura del importe esperado a obtener después de su depreciación
    printf("Ingrese el valor de venta (residual) del automovil: ");
    scanf("%f", &valor_residual);

    //Registro de la fecha que inicia a depreciarse el automovil
    printf("Ingrese el ano de inicio de la depreciacion: ");
    scanf("%d", &ano_inicio);

    //Registro de la fecha en que termina la depreciación del automovil
    printf("Ingrese el ano final de la depreciacion: ");
    scanf("%d", &ano_final);

    // Calcular la depreciación anual usando la tasa fija del 25%
    depreciacion_anual = (valor_inicial - valor_residual) * 0.25;

    // Muestra los resultados en la tabla de depreciación
    printf("\nAno\tDepreciacion Acumulada (USD)\tValor Real Anual (USD)\n");

    // Inicializar la depreciación acumulada
    float depreciacion_acumulada = 0.0;
    float valor_real;

    // Realiza por año cuanto se va depreciando el automovil
    for (ano_actual = ano_inicio; ano_actual <= ano_final; ano_actual++) {
        depreciacion_acumulada += depreciacion_anual;
        valor_real = valor_inicial - depreciacion_acumulada;

        // Comprobación de que el valor del automovil no es menor al valor residual
        if (valor_real < valor_residual) {
            valor_real = valor_residual;
            // Si el valor real ha alcanzado el valor de rescate, no aumentar más la depreciación acumulada
            depreciacion_acumulada = valor_inicial - valor_residual;
        }

        // Refleja los resultados anuales
        printf("%d\t%.2f\t\t\t%.2f\n", ano_actual, depreciacion_acumulada, valor_real);

        // Si hemos alcanzado el valor de residual, no hay necesidad de continuar
        if (valor_real <= valor_residual) {
            break;
        }
    }

    // Explicación si el saldo es positivo y tenemos una ganancia
    if (valor_real > valor_residual) {
        printf("\nAl final del periodo de depreciacion, el automovil todavía tiene un valor residual que puede ser recuperado al venderlo.\n");
    } else if (valor_real == valor_residual) {
        printf("\nAl final del periodo de depreciacion, el automovil ha alcanzado su valor de rescate estimado.\n");
    } else {
        // En la práctica contable, esta es una mala praxis por lo que se menciona lo siguiente
        printf("\nAl final del periodo de depreciacion, el automovil tiene un valor residual negativo, lo que indica que podria haber sido sobrevaluado o su vida util subestimada.\n");
    }

    //Salir
    printf("Oprima cualquier numero para salir:");
    scanf("%f", &valor_inicial);

    return 0;
}