#include <stdio.h>
#include "cadastrar.h"

int main(){

    int menu = 0;
    printf("===== SISTEMA DE CADASTROS ESCOLARES =====\n1 - Cadastrar aluno\2 - Listar alunos\n3 - Cadastrar professor\n4 - Listar professores\n5 - Cadastrar turma\n6 - Listar turmas\n7 - Cadastrar disciplina\n8 - Listar disciplinas\n9 - Cadastrar curso\n10 - Listar cursos\n11 - Cadastrar funcionário\n12 - Listar funcionários\n0 - Sair\nEscolha uma opção:\n");
    scanf("%d",&menu);

    switch (menu){
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    case 9:
        break;
    case 10:
        break;
    case 11:
        int quantidade;
        printf("Quantos vc quer cadastrar?\n");
        scanf("%d",&quantidade);
        cadastrarFuncionario(quantidade);
        break;
    case 12:
        break;
    case 0:
        break;                          
    default:
        break;
    }

    return 0;
}