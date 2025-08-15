#include <stdio.h>

int main(){
    printf("Hello, World!\n");
    getchar();
    return 0;
}

int i = 10;
float r = 3.1514;

int main2(){
    int i = 10;
    float r = 7.1234;
    printf("Inteiro: %d, Real: %f \n", i, r);
    return 0; 
}

int main3(){
    int idade;
    float altura;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Idade: %d, Altura: %.2f \n", idade, altura);
    return 0;
}