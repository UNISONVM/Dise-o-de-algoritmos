/*
    Nombre del programa: Signos zodiacales
    --------------------------------------------
    Descripción
     Este programa indica que signo zodiacal es de acuerdo con la fecha de nacimiento
     
     El usuario debe ingresar una dia y un mes para determinar el signo zodiacal correspondiente.

     Autor: Verónica Mejía López
     Fecha: 11/05/2024
*/
#include <stdio.h>

int main() {
    int dia, mes; // Variables para almacenar el día y mes de nacimiento del usuario.

    // Solicitar al usuario el mes de nacimiento.
    printf("Ingrese el mes de nacimiento (1-12): ");
    scanf("%d", &mes);

    // Solicitar al usuario el día de nacimiento.
    printf("Ingrese el día de nacimiento (1-31): ");
    scanf("%d", &dia);

    // Usar condiciones para determinar el signo zodiacal.
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19)) {
        printf("Tu signo zodiacal es Aries.\n");
    } else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20)) {
        printf("Tu signo zodiacal es Tauro.\n");
    } else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20)) {
        printf("Tu signo zodiacal es Géminis.\n");
    } else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22)) {
        printf("Tu signo zodiacal es Cáncer.\n");
    } else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22)) {
        printf("Tu signo zodiacal es Leo.\n");
    } else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22)) {
        printf("Tu signo zodiacal es Virgo.\n");
    } else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22)) {
        printf("Tu signo zodiacal es Libra.\n");
    } else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21)) {
        printf("Tu signo zodiacal es Escorpio.\n");
    } else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21)) {
        printf("Tu signo zodiacal es Sagitario.\n");
    } else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19)) {
        printf("Tu signo zodiacal es Capricornio.\n");
    } else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18)) {
        printf("Tu signo zodiacal es Acuario.\n");
    } else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20)) {
        printf("Tu signo zodiacal es Piscis.\n");
    } else {
        printf("Has ingresado una fecha inválida.\n");
    }

    // Pausar el programa para que la ventana de la consola no se cierre.
    printf("Presione cualquier tecla para salir...");
    getchar(); 
    getchar(); 

    return 0;
}

