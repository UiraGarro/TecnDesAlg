#include <stdio.h>

int main() {
    float n = 1.99;
    int contador = 1;
    int repeticoes = 50;

    while (contador <= repeticoes) { 
        printf("%d - %.2f\n", contador, n); 
        n += 1.99;
        contador++;
    }

    return 0;
}