// Aula 03 - Fixação de Recursividade Aplicada

#include <stdio.h>
#include <string.h>

// Contagem regressiva de n até 0
void contagem(int n)
{
    // Condição Base
    if (n == 0)
    {
        printf("Fim da contagem!\n");

        return;
    }

    printf("%d\n", n);
    contagem(n - 1); // Chamada recursiva
}

// Função recursiva de soma de números
int somatoria(int n)
{
    // Condição Base
    if (n == 0)
    {
        return 0;
    }

    return n + somatoria(n - 1); // Chamada recursiva
}

// Função recursiva de potenciação
long long potencia(int base, int exp)
{
    // Condição Base
    if (exp == 0)
        return 1;

    return base * potencia(base, exp - 1); // Chamada recursiva
}

// Soma de um vetor de inteiros usando recursão
int somaVetor(int v[], int n)
{
    if (n == 0)
        return 0;
    return v[n - 1] + somaVetor(v, n - 1);
}

// Maior elemento de um vetor de inteiros usando recursão
int maior(int v[], int n)
{
    if (n == 1)
        return v[0];
    int anterior = maior(v, n - 1);
    if (v[n - 1] > anterior)
        return v[n - 1];
    return anterior;
}

// Inverter uma string usando recursão
void inverter(char texto[], int i)
{
    if (i < 0)
        return;
    printf("%c", texto[i]);
    inverter(texto, i - 1);
}

// Desafio - Qual será a saída?
// falta...

int main()
{
    contagem(5);                                // Inicia a contagem a partir de 5
    printf("Soma total: %d\n", somatoria(5));   // Exibe a soma total da função somatoria
    printf("Potencia: %lld\n", potencia(2, 5)); // Exibe o resultado da função potencia

    int vetor[] = {1, 2, 3, 4, 5};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    printf("Soma do vetor: %d\n", somaVetor(vetor, n)); // Exibe a soma do vetor

    printf("Maior elemento: %d\n", maior(vetor, n)); // Exibe o maior elemento do vetor

    char texto[] = "FIAP";
    printf("String invertida: ");
    inverter(texto, strlen(texto) - 1);
    printf("\n"); // Exibe a string invertida

    return 0;
}
