#include <stdio.h>
#include <stdlib.h>

// Definição do Nó
struct No
{
    int dado;
    struct No *proximo;
};

// Função para inserir um novo nó no início da lista
void inserirInicio(struct No **cabeca, int novo_dado)
{
    struct No *novo_no = (struct No *)malloc(sizeof(struct No));

    novo_no->dado = novo_dado;
    novo_no->proximo = *cabeca;
    *cabeca = novo_no;
}

// Função para percorrer e imprimir a lista
void imprimirLista(struct No *cabeca)
{
    struct No *atual = cabeca;
    while (atual != NULL)
    {
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

int main()
{
    struct No *cabeca = NULL;

    // Inserindo elementos
    inserirInicio(&cabeca, 30);
    inserirInicio(&cabeca, 20);
    inserirInicio(&cabeca, 10);

    // Mostrando a lista na tela
    printf("Elementos da lista ligada:\n");
    imprimirLista(cabeca);

    return 0;
}