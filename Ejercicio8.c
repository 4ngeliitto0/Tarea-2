#include <stdio.h>

int main() {
    int a, b;

    printf("=== Verificador de divisores ===\n");
    printf("Ingresa el primer numero (A): ");
    scanf("%d", &a);
    printf("Ingresa el segundo numero (B): ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: B no puede ser cero (division por cero).\n");
        return 1;
    }

    if (a % b == 0) {
        printf("Resultado: %d ES divisor de %d\n", b, a);
    } else {
        printf("Resultado: %d NO es divisor de %d\n", b, a);
    }

    return 0;
}
