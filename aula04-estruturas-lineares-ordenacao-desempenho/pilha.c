#include <stdio.h>
#include <stdlib.h>

// Estrutura do Nó da Pilha
struct No
{
    int dado;
    struct No *proximo;
};

// Função PUSH (Empilhar no topo)
void push(struct No **topo, int valor)
{
    struct No *novo_no = (struct No *)malloc(sizeof(struct No));
    if (novo_no == NULL)
    {
        printf("Erro: Sem memória disponível!\n");
        return;
    }
    novo_no->dado = valor;
    novo_no->proximo = *topo; // O novo nó aponta para o antigo topo
    *topo = novo_no;          // O topo agora passa a ser o novo nó
    printf("%d empilhado.\n", valor);
}

// Função POP (Desempilhar do topo)
int pop(struct No **topo)
{
    if (*topo == NULL)
    {
        printf("A pilha está vazia!\n");
        return -1; // Retorna um valor de erro
    }
    struct No *auxiliar = *topo; // Guarda o nó que vai sair
    int dado_removido = auxiliar->dado;

    *topo = (*topo)->proximo; // O topo avança para o próximo nó
    free(auxiliar);           // Libera a memória do nó removido

    return dado_removido;
}

int main()
{
    struct No *topo = NULL; // Pilha começa vazia

    // Empilhando elementos
    push(&topo, 10);
    push(&topo, 20);
    push(&topo, 30);

    // Desempilhando elementos
    printf("\nDesempilhando: %d\n", pop(&topo));
    printf("Desempilhando: %d\n", pop(&topo));

    return 0;
}