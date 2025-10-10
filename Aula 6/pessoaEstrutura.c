#include <stdio.h>

typedef struct endereco {
    char rua[50];
    int numero;
    char cidade[30];
    char estado[30];
    char cep[10];
} Endereco;

typedef struct Pessoa {
    char nome[20];
    int idade;
    float altura;
    float peso;
    char endereco[50];
} Pessoa;

int main(){
    Pessoa pessoal;
    pessoal.idade = 20;
    pessoal.altura = 1.75f;
    pessoal.peso = 60.0f;

    printf("Informe o nome: ");
    fgets(pessoal.nome, sizeoff(pessoal.nome), stdin);
    printf("Nome: %s\n", pessoal.nome);

    struct Pessoa pessoa2;
    pessoa2 = {"Joao", 25, 1.80f, 75.0f, "Rua A, 123"};
    printf("Nome: %d\n", pessoa2.idade);
    return 0;
}