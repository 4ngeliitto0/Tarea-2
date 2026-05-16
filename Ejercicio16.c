#include <stdio.h>

int main() {
    int arr[100], i;
    printf("=== Los 100 primeros numeros pares ===\n");
    for (i = 0; i < 100; i++) {
        arr[i] = (i + 1) * 2;
    }
    for (i = 0; i < 100; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
