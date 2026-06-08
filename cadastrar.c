#include <stdio.h>
#include "cadastrar.h"

struct aluno{
    int codigo;
    char nome[50];
    int idade;
    char turma[20];
};

struct professor{
    int codigo;
    char nome[50];
    char disciplina[50];
    char telefone[15];
};

struct turma{
    int codigo;
    char nome[50];
    char periodo[20];
    int sala;
};

struct disciplina{
    int codigo;
    char nome[50];
    int carga;
    char professor[50];
};

struct curso{
    int codigo;
    char nome[50];
    int semestres;
    char turno[20];
};

struct funcionario{
    int codigo;
    char nome[50];
    char cargo[50];
    char telefone[15];
};

struct aluno alunos[100];
struct professor professores[100];
struct turma turmas[100];
struct disciplina disciplinas[100];
struct curso cursos[100];
struct funcionario funcionarios[100];

int qtdAlunos = 0;
int qtdProfessores = 0;
int qtdTurmas = 0;
int qtdDisciplinas = 0;
int qtdCursos = 0;
int qtdFuncionarios = 0;

/* ALUNOS */

void cadastrarAluno(int quantidade){

    int i;

    for(i = qtdAlunos; i < qtdAlunos + quantidade; i++){

        printf("Codigo do aluno: ");
        scanf("%d",&alunos[i].codigo);

        printf("Nome do aluno: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("Idade: ");
        scanf("%d",&alunos[i].idade);

        printf("Turma: ");
        scanf(" %[^\n]", alunos[i].turma);
    }

    qtdAlunos += quantidade;
}

void listarAlunos(){

    int i;

    printf("\n===== ALUNOS =====\n");

    for(i=0;i<qtdAlunos;i++){

        printf("\nCodigo: %d", alunos[i].codigo);
        printf("\nNome: %s", alunos[i].nome);
        printf("\nIdade: %d", alunos[i].idade);
        printf("\nTurma: %s\n", alunos[i].turma);
    }
}

/* PROFESSORES */

void cadastrarProfessor(int quantidade){

    int i;

    for(i=qtdProfessores;i<qtdProfessores+quantidade;i++){

        printf("Codigo do professor: ");
        scanf("%d",&professores[i].codigo);

        printf("Nome do professor: ");
        scanf(" %[^\n]", professores[i].nome);

        printf("Disciplina: ");
        scanf(" %[^\n]", professores[i].disciplina);

        printf("Telefone: ");
        scanf("%s", professores[i].telefone);
    }

    qtdProfessores += quantidade;
}

void listarProfessores(){

    int i;

    printf("\n===== PROFESSORES =====\n");

    for(i=0;i<qtdProfessores;i++){

        printf("\nCodigo: %d", professores[i].codigo);
        printf("\nNome: %s", professores[i].nome);
        printf("\nDisciplina: %s", professores[i].disciplina);
        printf("\nTelefone: %s\n", professores[i].telefone);
    }
}

/* TURMAS */

void cadastrarTurma(int quantidade){

    int i;

    for(i=qtdTurmas;i<qtdTurmas+quantidade;i++){

        printf("Codigo da turma: ");
        scanf("%d",&turmas[i].codigo);

        printf("Nome da turma: ");
        scanf(" %[^\n]", turmas[i].nome);

        printf("Periodo: ");
        scanf(" %[^\n]", turmas[i].periodo);

        printf("Sala: ");
        scanf("%d",&turmas[i].sala);
    }

    qtdTurmas += quantidade;
}

void listarTurmas(){

    int i;

    printf("\n===== TURMAS =====\n");

    for(i=0;i<qtdTurmas;i++){

        printf("\nCodigo: %d", turmas[i].codigo);
        printf("\nNome: %s", turmas[i].nome);
        printf("\nPeriodo: %s", turmas[i].periodo);
        printf("\nSala: %d\n", turmas[i].sala);
    }
}

/* DISCIPLINAS */

void cadastrarDisciplina(int quantidade){

    int i;

    for(i=qtdDisciplinas;i<qtdDisciplinas+quantidade;i++){

        printf("Codigo da disciplina: ");
        scanf("%d",&disciplinas[i].codigo);

        printf("Nome da disciplina: ");
        scanf(" %[^\n]", disciplinas[i].nome);

        printf("Carga horaria: ");
        scanf("%d",&disciplinas[i].carga);

        printf("Professor responsavel: ");
        scanf(" %[^\n]", disciplinas[i].professor);
    }

    qtdDisciplinas += quantidade;
}

void listarDisciplinas(){

    int i;

    printf("\n===== DISCIPLINAS =====\n");

    for(i=0;i<qtdDisciplinas;i++){

        printf("\nCodigo: %d", disciplinas[i].codigo);
        printf("\nNome: %s", disciplinas[i].nome);
        printf("\nCarga Horaria: %d", disciplinas[i].carga);
        printf("\nProfessor: %s\n", disciplinas[i].professor);
    }
}

/* CURSOS */

void cadastrarCurso(int quantidade){

    int i;

    for(i=qtdCursos;i<qtdCursos+quantidade;i++){

        printf("Codigo do curso: ");
        scanf("%d",&cursos[i].codigo);

        printf("Nome do curso: ");
        scanf(" %[^\n]", cursos[i].nome);

        printf("Semestres: ");
        scanf("%d",&cursos[i].semestres);

        printf("Turno: ");
        scanf(" %[^\n]", cursos[i].turno);
    }

    qtdCursos += quantidade;
}

void listarCursos(){

    int i;

    printf("\n===== CURSOS =====\n");

    for(i=0;i<qtdCursos;i++){

        printf("\nCodigo: %d", cursos[i].codigo);
        printf("\nNome: %s", cursos[i].nome);
        printf("\nSemestres: %d", cursos[i].semestres);
        printf("\nTurno: %s\n", cursos[i].turno);
    }
}

/* FUNCIONARIOS */

void cadastrarFuncionario(int quantidade){

    int i;

    for(i=qtdFuncionarios;i<qtdFuncionarios+quantidade;i++){

        printf("Codigo do funcionario: ");
        scanf("%d",&funcionarios[i].codigo);

        printf("Nome do funcionario: ");
        scanf(" %[^\n]", funcionarios[i].nome);

        printf("Cargo: ");
        scanf(" %[^\n]", funcionarios[i].cargo);

        printf("Telefone: ");
        scanf("%s", funcionarios[i].telefone);
    }

    qtdFuncionarios += quantidade;
}

void listarFuncionarios(){

    int i;

    printf("\n===== FUNCIONARIOS =====\n");

    for(i=0;i<qtdFuncionarios;i++){

        printf("\nCodigo: %d", funcionarios[i].codigo);
        printf("\nNome: %s", funcionarios[i].nome);
        printf("\nCargo: %s", funcionarios[i].cargo);
        printf("\nTelefone: %s\n", funcionarios[i].telefone);
    }
}
