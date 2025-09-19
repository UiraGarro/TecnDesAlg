#include <stdio.h>

//int main() {
//   float n = 1.99;
//   int contador = 1;
//    int repeticoes = 50;
//
//    while (contador <= repeticoes) { 
//       printf("%d - %.2f\n", contador, (n * contador)); 
//        n += 1.99;
//        contador++;
//    }

//    return 0;
//}

int main() {
    int n = 5;
    int contador = 1;
    int repeticoes = 10;

    while (contador <= repeticoes) { 
       printf("%d x %d = %d\n", n, contador, (n * contador)); 
        contador++;
    }
    return 0;
}