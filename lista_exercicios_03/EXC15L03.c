// 15. Solicitar o nome, idade e sexo (F/M) de várias pessoas. Após cada entrada, perguntar se deseja
// continuar. Quando encerrar, apresentar a média de idade das mulheres.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[20];
    int idade;
    char sexo;

    char cont;
    int i=0;
    do {
        i++;
        printf("Pessoa %d\n", i);
        
        printf("Nome: ");
        scanf(" %s", nome);
        
        printf("Idade: ");
        scanf(" %d", &idade);

        printf("Sexo (F/M): ");
        scanf(" %c", &sexo);

        printf("Deseja continuar?\n");
        scanf(" %c", &cont);
    } while (cont == 'S' || cont == 's');

    system("pause");
    return 0;
}