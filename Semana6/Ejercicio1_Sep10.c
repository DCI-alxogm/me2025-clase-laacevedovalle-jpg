#include <stdio.h>
#include <math.h>

double funcion(double x) {
    return exp(-x) * cos(2 * x) + sin(2 * x);
}

int main() {
    double a = 14.5;
    double b = 15.5;
    double tolerancia = 0.000001;
    double c, c_anterior;
    int iteraciones = 0;
    double error_relativo, error_interacciones;

    printf("==== MÉTODO DE BISECCIÓN ====\n");
    printf("Intervalo inicial: [%.2f, %.2f]\n", a, b);
    printf("Tolerancia: %f\n\n", tolerancia);

    printf("Iteracion | Raiz Vieja | Raiz Actual | Error Relativo | Error entre Interacciones\n");
    printf("----------------------------------------------------------------------------------\n");

    c_anterior = (a + b) / 2.0; // Initial guess

    while ((b - a) / 2.0 > tolerancia) {
        iteraciones++;
        c = (a + b) / 2.0;

        if (iteraciones > 1) {
            error_relativo = fabs((c - c_anterior) / c);
            error_interacciones = fabs(c - c_anterior);
        } else {
            error_relativo = 0.0; // No relative error for the first iteration
            error_interacciones = 0.0; // No error between interactions for the first iteration
        }


        printf("%9d | %10.6f | %11.6f | %14.10f | %24.10f\n", iteraciones, c_anterior, c, error_relativo, error_interacciones);


        if (funcion(c) == 0) {
            break;
        } else if (funcion(c) * funcion(a) < 0) {
            b = c;
        } else {
            a = c;
        }
        c_anterior = c; // Update c_anterior for the next iteration
    }

    printf("\nRaíz aproximada encontrada: %.6f\n", c);
    printf("f(c) en la raíz: %.6f\n", funcion(c));
    printf("Iteraciones realizadas: %d\n", iteraciones);
    printf("Error final: %.10f\n", (b - a) / 2.0);

    return 0;
}