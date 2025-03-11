// Crie uma estrutura que armazene matrícula, nome e ano nascimento de um aluno.
// O usuário deverá digitar as informações e ao final, elas devem ser exibidas em tela.

#include <stdio.h>

struct aluno {
    char mat[20];
    char nome[50];
    int anoNasc;
};

int main() {
    struct aluno alu1;

    printf("Informe o nome completo do aluno: \n");
    scanf("%s", alu1.nome);

    printf("Informe o número de matrícula do aluno: \n");
    scanf("%s", alu1.mat);

    printf("Informe o ano de nascimento do aluno: \n");
    scanf("%d", &alu1.anoNasc);

    printf("Nome: %s \n", alu1.nome);
    printf("Matrícula: %s \n", alu1.mat); 
    printf("Ano de Nascimento %d \n", alu1.anoNasc);

    return 0;
}