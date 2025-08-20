#include <stdio.h>

// Función para calcular el factorial
int factorial(int n) {
    int f = 1;
    for(int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

// Función principal
int main() {
    float actual, anterior, error;
    float x, termino, suma = 0.0;
    int n;

    // 1. Pedir aproximaciones
    printf("Ingrese la aproximacion actual: ");
    scanf("%f", &actual);
    printf("Ingrese la aproximacion anterior: ");
    scanf("%f", &anterior);

    // 2. Calcular error aproximado porcentual
    error = ( (actual - anterior) / actual ) * 100;
    if(error < 0) error = -error;  // valor absoluto
    printf("Error aproximado porcentual = %.4f%%\n", error);

    // 3. Pedir datos para la serie de Maclaurin
    printf("\nIngrese el valor de x: ");
    scanf("%f", &x);
    printf("Ingrese el numero de terminos de la serie: ");
    scanf("%d", &n);

    // 4. Calcular la serie de Maclaurin para e^x
    suma = 0.0;
    for(int i = 0; i < n; i++) {
        termino = (pow(x, i)) / factorial(i);
        suma += termino;
    }

    // 5. Mostrar resultado
    printf("La aproximacion de e^x con %d terminos es: %.6f\n", n, suma);

    return 0;
}
