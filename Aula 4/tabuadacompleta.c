// Tabuada completa com todos os numeros seguidos de 1 a 10

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); // Linha em branco entre as tabuadas
    }

    return 0;
}