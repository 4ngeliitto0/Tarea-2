#include <stdio.h>

int main() {
    float r;
    printf("Ingresa el radio: "); 
    scanf("%f", &r);
    
    // Calcula e imprime en la misma linea usando PI como 3.1416
    printf("Area: %.2f\nCircunferencia: %.2f\n", 3.1416 * (r * r), 2 * 3.1416 * r);
    return 0;
}
