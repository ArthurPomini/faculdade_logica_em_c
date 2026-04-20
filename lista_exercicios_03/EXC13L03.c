// 13. Solicitar o ano de nascimento e informar se o ano é bissexto ou não.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ano;
    printf("Digite o seu ano de nascimento: ");
    scanf(" %d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        printf("%d eh um ano bissexto.\n", ano);
    else
        printf("%d nao eh um ano bissexto.\n", ano);

    system("pause");
    return 0;
}