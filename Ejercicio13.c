#include <stdio.h>

int main() {
    int n, i, suma = 0;
    printf("=== Suma de arreglo ===\n");
    printf("Cuantos elementos: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
        suma += arr[i];
    }
    printf("Suma = %d\n", suma);
    return 0;
}
