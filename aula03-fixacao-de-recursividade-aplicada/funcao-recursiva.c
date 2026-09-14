// Aula 03 - Fixação de Recursividade Aplicada

#include <stdio.h>

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

int main()
{
    contagem(5);                                // Inicia a contagem a partir de 5
    printf("Soma total: %d\n", somatoria(5));   // Exibe a soma total da função somatoria
    printf("Potencia: %lld\n", potencia(2, 5)); // Exibe o resultado da função potencia

    return 0;
}
