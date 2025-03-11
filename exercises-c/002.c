//Construa um programa que armazene as informações de 3 alunos e ao final, exiba todas as informações em tela.
#include <stdio.h>

struct aluno {
    char mat[20];
    char nome[50];
    int anoNasc;
};

int main() {
    struct aluno valuno[3];

    for(int i = 0; i < 3; i++){
        scanf("%s", valuno[i].nome);
        scanf("%s", valuno[i].mat);
        scanf("%d", &valuno[i].anoNasc);  

        printf("Nome: %s \n", valuno[i].nome);
        printf("Matrícula: %s \n", valuno[i].mat); 
        printf("Ano de Nascimento %d \n", valuno[i].anoNasc);
    }
    
    return 0;
}