#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    double discriminante, x1, x2, parteReal, parteImaginaria;
    char respuesta;

    do {
        system("cls || clear"); // Limpia la pantalla (funciona en Windows y Linux/Mac)
        printf("Programa para resolver ecuaciones cuadraticas\n");
        printf("Formula: ax^2 + bx + c = 0\n");

        printf("Ingrese el valor de a: ");
        scanf("%lf", &a);
        printf("Ingrese el valor de b: ");
        scanf("%lf", &b);
        printf("Ingrese el valor de c: ");
        scanf("%lf", &c);

        if (a == 0) {
            printf("Error: a no puede ser cero (no es una ecuacion cuadratica).\n");
        } else {
            discriminante = b*b - 4*a*c;

            if (discriminante > 0) {
                x1 = (-b + sqrt(discriminante)) / (2*a);
                x2 = (-b - sqrt(discriminante)) / (2*a);
                printf("Dos soluciones reales:\n");
                printf("x1 = %.2lf\n", x1);
                printf("x2 = %.2lf\n", x2);
            } else if (discriminante == 0) {
                x1 = -b / (2*a);
                printf("Una solucion real doble:\n");
                printf("x = %.2lf\n", x1);
            } else {
                parteReal = -b / (2*a);
                parteImaginaria = sqrt(-discriminante) / (2*a);
                printf("Soluciones imaginarias:\n");
                printf("x1 = %.2lf + %.2lfi\n", parteReal, parteImaginaria);
                printf("x2 = %.2lf - %.2lfi\n", parteReal, parteImaginaria);
            }
        }

        printf("\n¿Desea resolver otra ecuacion? (S/N): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 'S' || respuesta == 's');

    printf("Fin del programa.\n");
}
