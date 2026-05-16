#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, nul = 0;
    printf("=== Clasificar elementos del arreglo ===\n");
    printf("Cuantos elementos: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        if (arr[i] > 0)      pos++;
        else if (arr[i] < 0) neg++;
        else                 nul++;
    }
    printf("Positivos: %d\n", pos);
    printf("Negativos: %d\n", neg);
    printf("Nulos    : %d\n", nul);
    return 0;
}
