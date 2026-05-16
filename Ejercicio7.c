#include <stdio.h>

int main() {
    float d, D; // d = distancia de ida, D = dias de estancia
    printf("Ingresa la distancia de ida (km) y dias de estancia (separados por espacio): ");
    scanf("%f %f", &d, &D);

    // Condicion: Mas de 7 dias Y distancia total (d*2) mayor a 800
    if (D > 7 && (d * 2) > 800) {
        // Multiplicar por 0.70 es restarle el 30% de descuento directo
        printf("Total a pagar (con descuento): $%.2f\n", (d * 2 * 0.23) * 0.70);
    } else {
        printf("Total a pagar (precio normal): $%.2f\n", d * 2 * 0.23);
    }
    
    return 0;
}
