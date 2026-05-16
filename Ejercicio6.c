#include <stdio.h>

int main() {
    float sueldo;
    printf("Ingresa el sueldo del trabajador: $");
    scanf("%f", &sueldo);
    
    if (sueldo < 1000) {
        printf("Nuevo sueldo (15%% de aumento): $%.2f\n", sueldo * 1.15);
    } else {
        printf("Nuevo sueldo (12%% de aumento): $%.2f\n", sueldo * 1.12);
    }
    
    return 0;
}
