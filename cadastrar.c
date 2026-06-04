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

void cadastrarFuncionario(int quantidade){
    struct funcionario f1[quantidade];
    for(int i=0; i<quantidade;i++){
        printf("codigo do funcionario %d:\n", i+1);
        scanf("%d",&f1[i].codigo);
        printf("nome do funcionario %d:\n", i+1);
        scanf("%s",f1[i].nome);
        printf("cargo do funcionario %d:\n", i+1);
        scanf("%s",f1[i].cargo);
        printf("telefone do funcionario %d:\n", i+1);
        scanf("%s",f1[i].telefone);
    }    
}

void listarFuncionarios(int quantidade){
    for(int i=0; i<quantidade;i++){
        printf("codigo: %d",f1[i].codigo)
    }    
}





