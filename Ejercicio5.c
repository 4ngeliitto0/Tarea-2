#include <stdio.h>

int main() {
    float compra;
    printf("Ingresa el monto de la compra: $");
    scanf("%f", &compra);
    
    // Aquí está tu rombo: ¿Es mayor a 2500?
    if (compra > 2500) {
        // Camino Verdadero: Multiplicamos por 0.92 para restarle el 8% directo
        printf("Total a pagar (con 8%% de descuento): $%.2f\n", compra * 0.92);
    } else {
        // Camino Falso: Paga exactamente lo que costaba
        printf("Total a pagar (sin descuento): $%.2f\n", compra);
    }
    
    return 0;
}
