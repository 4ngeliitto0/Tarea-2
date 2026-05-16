#include <stdio.h>

int main() {
    int n, i;
    long long prod = 1;
    printf("=== Producto de los N primeros naturales ===\n");
    printf("Ingresa N: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("N debe ser mayor o igual a 1.\n");
        return 1;
    }
    for (i = 1; i <= n; i++) {
        prod *= i;
    }
    printf("1 x 2 x ... x %d = %lld\n", n, prod);
    return 0;
}
