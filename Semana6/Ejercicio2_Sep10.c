#include <stdio.h>
#include <math.h>

float f(float c) {
    return sin(10*x) - cos(3*x);
}

int main() {
    float a = 14.5f, b = 15.5f;     
    float c = 0.0f, c_anterior = 0.0f;
    float error = 0.0f;
    float tolerancia = 1e-6f;        
    int pasos = 0,;
    int x;

    printf("MÉTODO DE BISECCIÓN\n");
    printf("Intervalo inicial: [%.2f, %.2f]\n", a, b);
    printf("Tolerancia: %.8f\n\n", tolerancia);

    do {
        c_anterior = c;
        c = (a + b) / 2.0f;  

        
        if (f(a) * f(c) < 0.0f) {
            b = c;
        } else {
            a = c;
        }

        error = fabsf(c - c_anterior);
        pasos++;

    } while (error > tolerancia);

    printf("Raíz aproximada encontrada: %.6f\n", c);
    printf("f(c) en la raíz: %.6f\n", f(c));
    printf("Iteraciones realizadas: %d\n", pasos);
    printf("Error final: %.10f\n", error);

    return 0;
}