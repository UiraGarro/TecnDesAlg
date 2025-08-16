#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("Erro: Divisão por zero\n");
        return 0;
    }
}

int main() {
    while (1) {
        printf("\n(1) Soma\n(2) Subtração\n(3) Multiplicação\n(4) Divisão\n(5) Sair\n");
        printf("Escolha uma opção: ");

        int choice;
        if (scanf("%d", &choice) != 1) {
            printf("Entrada inválida.\n");
            while (getchar() != '\n'); // limpa buffer
            continue;
        }

        // Se for sair
        if (choice == 5) {
            char confirm;
            printf("Tem certeza que quer sair? (s/n): ");
            scanf(" %c", &confirm);
            if (confirm == 's' || confirm == 'S') {
                break;
            } else {
                continue;
            }
        }

        // Operações
        if (choice >= 1 && choice <= 4) {
            int a, b, result;
            printf("Primeiro número: ");
            scanf("%d", &a);
            printf("Segundo número: ");
            scanf("%d", &b);

            switch (choice) {
                case 1:
                    result = add(a, b);
                    printf("Resultado: %d\n", result);
                    break;
                case 2:
                    result = subtract(a, b);
                    printf("Resultado: %d\n", result);
                    break;
                case 3:
                    result = multiply(a, b);
                    printf("Resultado: %d\n", result);
                    break;
                case 4:
                    result = divide(a, b);
                    printf("Resultado: %d\n", result);
                    break;
            }
        } else {
            printf("Escolha inválida.\n");
        }
    }
    return 0;
}
