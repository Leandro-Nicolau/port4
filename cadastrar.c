#include <stdio.h>
#include "cadastrar.h"

struct aluno{
    int codigo;
    char nome[50];
    int idade;
    char turma[10];
};

struct professor{
    int codigo;
    char nome[50];
    char disciplina[50];
    char telefone[11];
};

struct turma{
    int codigo;
    char nome[50];
    char periodo[50];
    int sala;
};

struct disciplina{
    int codigo;
    char nome[50];
    int carga;
    char professor[50];
};

struct cursos{
    int codigo;
    char nome[50];
    int semestres;
    char turno[50];
};

struct funcionario{
    int codigo;
    char nome[50];
    char cargo[50];
    char telefone[11];
};

struct aluno alunos[100];
struct professor professores[100];
struct turma turmas[100];
struct disciplina disciplinas[100];
struct cursos cursos[100];
struct funcionario funcionarios[100];

int qtdAlunos = 0;
int qtdProfessores = 0;
int qtdTurmas = 0;
int qtdDisciplinas = 0;
int qtdCursos = 0;
int qtdFuncionarios = 0;

void cadastrarAluno(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("Codigo do aluno:\n");
        scanf("%d",&alunos[i].codigo);

        printf("Nome do aluno:\n");
        scanf("%s",alunos[i].nome);

        printf("Idade:\n");
        scanf("%d",&alunos[i].idade);

        printf("Turma:\n");
        scanf("%s",alunos[i].turma);
    }
}

void listarAlunos(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("\nCodigo: %d",alunos[i].codigo);
        printf("\nNome: %s",alunos[i].nome);
        printf("\nIdade: %d",alunos[i].idade);
        printf("\nTurma: %s\n",alunos[i].turma);
    }
}

void cadastrarProfessor(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("Codigo do professor:\n");
        scanf("%d",&professores[i].codigo);

        printf("Nome do professor:\n");
        scanf("%s",professores[i].nome);

        printf("Disciplina:\n");
        scanf("%s",professores[i].disciplina);

        printf("Telefone:\n");
        scanf("%s",professores[i].telefone);
    }
}

void listarProfessores(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("\nCodigo: %d",professores[i].codigo);
        printf("\nNome: %s",professores[i].nome);
        printf("\nDisciplina: %s",professores[i].disciplina);
        printf("\nTelefone: %s\n",professores[i].telefone);
    }
}

void cadastrarTurma(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("Codigo da turma:\n");
        scanf("%d",&turmas[i].codigo);

        printf("Nome da turma:\n");
        scanf("%s",turmas[i].nome);

        printf("Periodo:\n");
        scanf("%s",turmas[i].periodo);

        printf("Sala:\n");
        scanf("%d",&turmas[i].sala);
    }
}

void listarTurmas(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("\nCodigo: %d",turmas[i].codigo);
        printf("\nNome: %s",turmas[i].nome);
        printf("\nPeriodo: %s",turmas[i].periodo);
        printf("\nSala: %d\n",turmas[i].sala);
    }
}

void cadastrarDisciplina(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("Codigo da disciplina:\n");
        scanf("%d",&disciplinas[i].codigo);

        printf("Nome da disciplina:\n");
        scanf("%s",disciplinas[i].nome);

        printf("Carga horaria:\n");
        scanf("%d",&disciplinas[i].carga);

        printf("Professor:\n");
        scanf("%s",disciplinas[i].professor);
    }
}

void listarDisciplinas(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("\nCodigo: %d",disciplinas[i].codigo);
        printf("\nNome: %s",disciplinas[i].nome);
        printf("\nCarga Horaria: %d",disciplinas[i].carga);
        printf("\nProfessor: %s\n",disciplinas[i].professor);
    }
}

void cadastrarCurso(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("Codigo do curso:\n");
        scanf("%d",&cursos[i].codigo);

        printf("Nome do curso:\n");
        scanf("%s",cursos[i].nome);

        printf("Semestres:\n");
        scanf("%d",&cursos[i].semestres);

        printf("Turno:\n");
        scanf("%s",cursos[i].turno);
    }
}

void listarCursos(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("\nCodigo: %d",cursos[i].codigo);
        printf("\nNome: %s",cursos[i].nome);
        printf("\nSemestres: %d",cursos[i].semestres);
        printf("\nTurno: %s\n",cursos[i].turno);
    }
}

void cadastrarFuncionario(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("Codigo do funcionario:\n");
        scanf("%d",&funcionarios[i].codigo);

        printf("Nome do funcionario:\n");
        scanf("%s",funcionarios[i].nome);

        printf("Cargo do funcionario:\n");
        scanf("%s",funcionarios[i].cargo);

        printf("Telefone do funcionario:\n");
        scanf("%s",funcionarios[i].telefone);
    }
}

void listarFuncionarios(int quantidade){
    for(int i=0;i<quantidade;i++){
        printf("\nCodigo: %d",funcionarios[i].codigo);
        printf("\nNome: %s",funcionarios[i].nome);
        printf("\nCargo: %s",funcionarios[i].cargo);
        printf("\nTelefone: %s\n",funcionarios[i].telefone);
    }
}
