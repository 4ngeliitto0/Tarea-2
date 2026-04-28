#include <stdio.h>

int main() {
    float dolares;
    printf("Cantidad en dolares: "); 
    scanf("%f", &dolares);
    
    printf("Equivale a: $%.2f pesos\n", dolares * 11.96);
    return 0;
}
