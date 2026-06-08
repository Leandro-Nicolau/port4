#include <stdio.h>
#include "cadastrar.h"

int main(){

    int menu;
    int quantidade;

    do{

        printf("\n===== SISTEMA DE CADASTROS ESCOLARES =====\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Listar alunos\n");
        printf("3 - Cadastrar professor\n");
        printf("4 - Listar professores\n");
        printf("5 - Cadastrar turma\n");
        printf("6 - Listar turmas\n");
        printf("7 - Cadastrar disciplina\n");
        printf("8 - Listar disciplinas\n");
        printf("9 - Cadastrar curso\n");
        printf("10 - Listar cursos\n");
        printf("11 - Cadastrar funcionario\n");
        printf("12 - Listar funcionarios\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d",&menu);

        switch(menu){

            case 1:
                printf("Quantos alunos deseja cadastrar? ");
                scanf("%d",&quantidade);
                cadastrarAluno(quantidade);
                break;

            case 2:
                listarAlunos();
                break;

            case 3:
                printf("Quantos professores deseja cadastrar? ");
                scanf("%d",&quantidade);
                cadastrarProfessor(quantidade);
                break;

            case 4:
                listarProfessores();
                break;

            case 5:
                printf("Quantas turmas deseja cadastrar? ");
                scanf("%d",&quantidade);
                cadastrarTurma(quantidade);
                break;

            case 6:
                listarTurmas();
                break;

            case 7:
                printf("Quantas disciplinas deseja cadastrar? ");
                scanf("%d",&quantidade);
                cadastrarDisciplina(quantidade);
                break;

            case 8:
                listarDisciplinas();
                break;

            case 9:
                printf("Quantos cursos deseja cadastrar? ");
                scanf("%d",&quantidade);
                cadastrarCurso(quantidade);
                break;

            case 10:
                listarCursos();
                break;

            case 11:
                printf("Quantos funcionarios deseja cadastrar? ");
                scanf("%d",&quantidade);
                cadastrarFuncionario(quantidade);
                break;

            case 12:
                listarFuncionarios();
                break;

            case 0:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    }while(menu != 0);

    return 0;
}
