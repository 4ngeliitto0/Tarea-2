#include <stdio.h>

int main() {
    int n, i, x, cuenta = 0;
    printf("=== Buscar numero en arreglo ===\n");
    printf("Cuantos elementos: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Numero a buscar: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (arr[i] == x)
            cuenta++;
    }
    printf("El numero %d aparece %d vez/veces en el arreglo.\n", x, cuenta);
    return 0;
}
