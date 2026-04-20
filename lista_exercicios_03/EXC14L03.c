// 14. Solicitar o nome e a idade de 3 pessoas (utilizando a estrutura PARA).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int pes = 3;
    char nome[20];
    int idade;

    for (int i=0; i<pes; i++) {
        printf("Digite o nome da %da pessoa: ", i+1);
        scanf(" %s", nome);

        printf("Digite a idade da %da pessoa: ", i+1);
        scanf(" %d", &idade);
    }

    return 0;
}