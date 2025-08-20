#include <stdio.h>

int main() {
    int numero;

    // Pedir número al usuario
    printf("Ingrese una cifra entera: ");
    scanf("%d", &cifra);

    // Verificar si es par o impar
    if (cifra % 2 == 0) {
        printf("La cifra %d es par.\n", cifra);
    } else {
        printf("La cifra %d es impar.\n", cifra);
    }

    return 0;
}