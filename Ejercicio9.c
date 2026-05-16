#include <stdio.h>

int main() {
    int n, i;
    printf("=== Tabla de multiplicar ===\n");
    printf("Ingresa N: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
