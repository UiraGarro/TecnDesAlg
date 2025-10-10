/*Exercício:

1. Crie uma estrutura representando os alunos do curso de ADS. A estrutura deve conter a matríucla do aluno, nome, nota da 1º prova e nota da 2º prova.

(a)Permita ao usuário entrar com os dados de 5 alunos.
(b)Encontre o aluno com maior nota da primeira prova.
(c)Encontre o aluno com maior nota geral(p1 + p2).
(d)Encontre o aluno com menor media geral.
(e)Para cada aluno, imprima a média geral e se ele foi aprovado ou reprovado. A média para aprovação é 6.0.
(f)Não use void, use typedef struct.

*/
#include <stdio.h>
#include <string.h>
#define MAX 5
typedef struct {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno alunos[MAX];
    for (int i = 0; i < MAX; i++) {
        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite a nota da 1º prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota da 2º prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);
    }
    int idxMaiorNota1 = 0, idxMaiorNotaGeral = 0, idxMenorMediaGeral = 0;
    float maiorNota1 = alunos[0].nota1;
    float maiorNotaGeral = alunos[0].nota1 + alunos[0].nota2;
    float menorMediaGeral = (alunos[0].nota1 + alunos[0].nota2) / 2;
    for (int i = 1; i < MAX; i++) {
        float mediaGeral = (alunos[i].nota1 + alunos[i].nota2) / 2;
        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            idxMaiorNota1 = i;
        }
        if ((alunos[i].nota1 + alunos[i].nota2) > maiorNotaGeral) {
            maiorNotaGeral = alunos[i].nota1 + alunos[i].nota2;
            idxMaiorNotaGeral = i;
        }
        if (mediaGeral < menorMediaGeral) {
            menorMediaGeral = mediaGeral;
            idxMenorMediaGeral = i;
        }
    }
    printf("Aluno com maior nota da 1º prova: %s (Matricula: %d, Nota: %.2f)\n", alunos[idxMaiorNota1].nome, alunos[idxMaiorNota1].matricula, alunos[idxMaiorNota1].nota1);
    printf("Aluno com maior nota geral: %s (Matricula: %d, Nota: %.2f)\n", alunos[idxMaiorNotaGeral].nome, alunos[idxMaiorNotaGeral].matricula, maiorNotaGeral);
    printf("Aluno com menor media geral: %s (Matricula: %d, Media: %.2f)\n", alunos[idxMenorMediaGeral].nome, alunos[idxMenorMediaGeral].matricula, menorMediaGeral);
    for (int i = 0; i < MAX; i++) {
        float mediaGeral = (alunos[i].nota1 + alunos[i].nota2) / 2;
        printf("Aluno: %s (Matricula: %d) - Media Geral: %.2f - %s\n", alunos[i].nome, alunos[i].matricula, mediaGeral, (mediaGeral >= 6.0) ? "Aprovado" : "Reprovado");
    }
    return 0;

}
