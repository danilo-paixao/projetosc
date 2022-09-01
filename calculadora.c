#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    char op;
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite a operação: ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a * b;
            break;
        case '/':
            c = a / b;
            break;
        case '^':
            c = pow(a, b);
            break;
        default:
            printf("Operação inválida!");
            return 0;
    }
    return 0;
}