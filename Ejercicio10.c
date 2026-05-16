#include <stdio.h>

int main() {
    int i, x, pos = 0, neg = 0, nul = 0;
    printf("=== Contar positivos, negativos y nulos ===\n");
    for (i = 1; i <= 100; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &x);
        if (x > 0)      pos++;
        else if (x < 0) neg++;
        else            nul++;
    }
    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", neg);
    printf("Nulos    : %d\n", nul);
    return 0;
}
