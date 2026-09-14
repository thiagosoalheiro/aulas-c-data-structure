/*
    Crie um mini-sistema de biblioteca que utilize uma struct Livro;
    Use typedef struct para os dados do livro;
    Crie uma função que receba um ponteiro para o livro;
    A função deve alterar o status de disponível para emprestado.
*/

// Atividade 01 - Mini Sistema de Biblioteca

#include <stdio.h>
#include <string.h>

typedef struct
{
    char titulo[100];
    char autor[100];
    char status[20];
} Livro;

void emprestarLivro(Livro *p)
{
    strcpy(p->status, "emprestado");
}

int main()
{
    Livro l1 = {"Os Dois Morrem no Final", "Adam Silvera", "disponivel"};

    printf("---Status Inicial---");
    printf("\nTítulo: %s\n", l1.titulo);
    printf("Autor do Livro: %s\n", l1.autor);
    printf("Status: %s\n\n", l1.status);

    emprestarLivro(&l1);

    printf("---Status Após Emprestado---");
    printf("\nTítulo: %s\n", l1.titulo);
    printf("Autor do Livro: %s\n", l1.autor);
    printf("Status: %s\n\n", l1.status);

    return 0;
}