//Faça um programa que leia um nome de até 10 caracteres, e diga quantas vogais foram lidas. Imprima as vogais, Obs: Use o fgets

#include <stdio.h>
#include <ctype.h>

int main() {
    char nome[11];
    int i, contador = 0;

    printf("Digite um nome (max 10 caracteres): ");
    fgets(nome, sizeof(nome), stdin);

    printf("Vogais encontradas: ");
    for (i = 0; nome[i] != '\0'; i++) {
        char letra = tolower(nome[i]); // Converte para minúsculo
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("%c ", nome[i]);
            contador++;
        }
    }

    printf("\nTotal de vogais: %d\n", contador);
    return 0;
}