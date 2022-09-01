#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){
    int a=0,b=0,c=0;
    char op;
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);
    printf("Digite a operacao: ");
    scanf("%c",&op);
    switch(op){
        case '+':
            c=a+b;
            break;
        case '-':
            c=a-b;
            break;
        case '*':
            c=a*b;
            break;
        case '/':
            c=a/b;
            break;
        case '^':
            c=math.pow(a,b);
            break;
        default:
            printf("Operacao invalida");
            break;
    }
    printf("Resultado: %d",c);
    return 0;
}