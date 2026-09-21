#include <stdio.h>
#include <stdlib.h>

// Estrutura do Nó da Pilha
typedef struct
{
    int dado;             // Guarda a informação
    struct Node *proximo; // Aponta para o próximo nó
} Node;

void inserirInicio(Node **head, int valor)
{
    Node *novo = malloc(sizeof(Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

// Função para imprimir a lista
void imprimirLista(Node *head)
{
    Node *atual = head; // Auxiliar
    while (atual != NULL)
    {
        printf("%d -> ", atual->dado);
        atual = atual->proximo; // Pulo
    }
    printf("NULL\n");
}

int main()
{
    // Criando um novo nó dinamicamente
    Node *novoNo1;
    Node *novoNo2;
    Node *novoNo3;

    // Aloca espaço para 1 nó
    // "malloc" = alocamento da memoria
    novoNo1 = (Node *)malloc(sizeof(Node));
    novoNo2 = (Node *)malloc(sizeof(Node));
    novoNo3 = (Node *)malloc(sizeof(Node));

    if (novoNo1 == NULL || novoNo2 == NULL || novoNo3 == NULL)
    {
        printf("Erro: Memoria insuficiente!\n");
        exit(1);
    }

    printf("%d", novoNo1->dado);
    // Atribuindo valores
    novoNo1->dado = 10;
    printf("%d\n", novoNo1->dado);

    novoNo1->proximo = NULL;

    return 0;
}