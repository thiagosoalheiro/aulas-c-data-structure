// Atividade em grupo - Caixa Eletrônico

#include <stdio.h>

void exibir_menu()
{
    printf("\n=========================\n");
    printf("SISTEMA CAIXA ELETRONICO");
    printf("\n=========================\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Realizar Saque\n");
    printf("3 - Realizar Deposito\n");
    printf("0 - Sair\n");
    printf("=========================\n");
}

void consultar_saldo(float saldo)
{
    printf("=======================\n");
    printf("    CONSULTAR SALDO\n");
    printf("Saldo atual: %.2f\n", saldo);
}

void sair()
{
    printf("=======================\nSAINDO\n=======================\n");
    printf("Volte sempre!\n");
}

float realizarSaque(float saldo)
{
    float valor;
    printf("=======================\n");
    printf("     REALIZAR SAQUE    \n");
    printf("Digite o valor do saque: ");
    scanf("%f", &valor);

    if (valor > saldo)
    {
        printf("Saldo insuficiente!\n");
    }
    else if (valor <= 0)
    {
        printf("Valor invalido!\n");
    }
    else
    {
        saldo -= valor;
        printf("Processando saque...\n");
        printf("Saque realizado com sucesso!\n");
        printf("Saldo atual: %.2f\n", saldo);
    }
    return saldo;
}

float realizarDeposito(float saldo)
{
    float valor;
    printf("=======================\n");
    printf("   REALIZAR DEPOSITO   \n");
    printf("Digite o valor do deposito: ");
    scanf("%f", &valor);

    if (valor > 0)
    {
        saldo += valor;
        printf("Deposito realizado com sucesso!\n");
        printf("Saldo atual: %.2f\n", saldo);
    }
    else
    {
        printf("Valor invalido!\n");
    }
    return saldo;
}

int main()
{
    int opcao;
    float saldo = 1000.0;

    do
    {
        exibir_menu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        while (getchar() != '\n')
            ;

        if (opcao < 0 || opcao > 3)
        {
            printf("Opcao Invalida!\n");
            continue;
        }

        switch (opcao)
        {
        case 1:
            consultar_saldo(saldo);
            break;
        case 2:
            saldo = realizarSaque(saldo);
            break;
        case 3:
            saldo = realizarDeposito(saldo);
            break;
        case 0:
            sair();
            break;
        }

    } while (opcao != 0);

    return 0;
}