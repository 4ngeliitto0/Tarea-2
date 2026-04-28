#include <stdio.h>

int main() {
    float dinero, tasa;
    printf("Ingresa el dinero a invertir y la tasa de interes (separados por espacio): "); 
    scanf("%f %f", &dinero, &tasa);
    
    // Monto original + (monto original * porcentaje)
    printf("Monto total a fin de mes: $%.2f\n", dinero + (dinero * tasa / 100));
    return 0;
}
