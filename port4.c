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
        printf("Escolha uma opcao:\n");

        scanf("%d",&menu);

        switch(menu){

            case 1:
                printf("Quantidade:\n");
                scanf("%d",&quantidade);
                cadastrarAluno(quantidade);
                break;

            case 2:
                listarAlunos(quantidade);
                break;

            case 3:
                printf("Quantidade:\n");
                scanf("%d",&quantidade);
                cadastrarProfessor(quantidade);
                break;

            case 4:
                listarProfessores(quantidade);
                break;

            case 5:
                printf("Quantidade:\n");
                scanf("%d",&quantidade);
                cadastrarTurma(quantidade);
                break;

            case 6:
                listarTurmas(quantidade);
                break;

            case 7:
                printf("Quantidade:\n");
                scanf("%d",&quantidade);
                cadastrarDisciplina(quantidade);
                break;

            case 8:
                listarDisciplinas(quantidade);
                break;

            case 9:
                printf("Quantidade:\n");
                scanf("%d",&quantidade);
                cadastrarCurso(quantidade);
                break;

            case 10:
                listarCursos(quantidade);
                break;

            case 11:
                printf("Quantidade:\n");
                scanf("%d",&quantidade);
                cadastrarFuncionario(quantidade);
                break;

            case 12:
                listarFuncionarios(quantidade);
                break;

        }

    }while(menu != 0);

    return 0;
}
