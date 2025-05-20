#include <stdio.h>

int main()
{
    // Valor da hora da lan house
    float valorHora = 5.0;

    // Cada computador tem 3 informações:
    // Ocupado? 0 = não, 1 = sim
    int ocupado1 = 0;
    int ocupado2 = 0;
    int ocupado3 = 0;
    int ocupado4 = 0;
    int ocupado5 = 0;

    // Nome do locador do computador
    char nome1[50] = "";
    char nome2[50] = "";
    char nome3[50] = "";
    char nome4[50] = "";
    char nome5[50] = "";

    // Tempo que o computador está alugado (em horas)
    float tempo1 = 0;
    float tempo2 = 0;
    float tempo3 = 0;
    float tempo4 = 0;
    float tempo5 = 0;

    int opcao; // Guarda a opção do menu
    int pc;    // Guarda o número do computador escolhido

    do
    {
        printf("\n=== LAN HOUSE ===\n");
        printf("1 - Mostrar computadores\n");
        printf("2 - Reservar computador (Check-in)\n");
        printf("3 - Finalizar aluguel (Check-out)\n");
        printf("0 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            // Mostrar computadores e seus status
            printf("Computador 1: ");
            if (ocupado1 == 0)
                printf("Livre\n");
            else
                printf("Ocupado por %s, %.2f horas\n", nome1, tempo1);

            printf("Computador 2: ");
            if (ocupado2 == 0)
                printf("Livre\n");
            else
                printf("Ocupado por %s, %.2f horas\n", nome2, tempo2);

            printf("Computador 3: ");
            if (ocupado3 == 0)
                printf("Livre\n");
            else
                printf("Ocupado por %s, %.2f horas\n", nome3, tempo3);

            printf("Computador 4: ");
            if (ocupado4 == 0)
                printf("Livre\n");
            else
                printf("Ocupado por %s, %.2f horas\n", nome4, tempo4);

            printf("Computador 5: ");
            if (ocupado5 == 0)
                printf("Livre\n");
            else
                printf("Ocupado por %s, %.2f horas\n", nome5, tempo5);
        }
        else if (opcao == 2)
        {
            // Reservar um computador
            printf("Digite o numero do computador para reservar (1-5): ");
            scanf("%d", &pc);

            if (pc < 1 || pc > 5)
            {
                printf("Numero invalido!\n");
            }
            else
            {
                // Checar se está livre
                if ((pc == 1 && ocupado1 == 0) ||
                    (pc == 2 && ocupado2 == 0) ||
                    (pc == 3 && ocupado3 == 0) ||
                    (pc == 4 && ocupado4 == 0) ||
                    (pc == 5 && ocupado5 == 0))
                {
                    char nome[50];
                    float tempo;

                    printf("Digite o nome do locador: ");
                    scanf(" %49[^\n]", nome);
                    printf("Digite o tempo em horas: ");
                    scanf("%f", &tempo);

                    if (pc == 1)
                    {
                        ocupado1 = 1;
                        for (int i = 0; i < 50; i++)
                            nome1[i] = nome[i];
                        tempo1 = tempo;
                    }
                    else if (pc == 2)
                    {
                        ocupado2 = 1;
                        for (int i = 0; i < 50; i++)
                            nome2[i] = nome[i];
                        tempo2 = tempo;
                    }
                    else if (pc == 3)
                    {
                        ocupado3 = 1;
                        for (int i = 0; i < 50; i++)
                            nome3[i] = nome[i];
                        tempo3 = tempo;
                    }
                    else if (pc == 4)
                    {
                        ocupado4 = 1;
                        for (int i = 0; i < 50; i++)
                            nome4[i] = nome[i];
                        tempo4 = tempo;
                    }
                    else if (pc == 5)
                    {
                        ocupado5 = 1;
                        for (int i = 0; i < 50; i++)
                            nome5[i] = nome[i];
                        tempo5 = tempo;
                    }
                    printf("Computador %d reservado com sucesso!\n", pc);
                }
                else
                {
                    printf("Computador %d esta ocupado!\n", pc);
                }
            }
        }
        else if (opcao == 3)
        {
            // Check-out
            printf("Digite o numero do computador para finalizar (1-5): ");
            scanf("%d", &pc);

            if (pc < 1 || pc > 5)
            {
                printf("Numero invalido!\n");
            }
            else
            {
                if ((pc == 1 && ocupado1 == 1) ||
                    (pc == 2 && ocupado2 == 1) ||
                    (pc == 3 && ocupado3 == 1) ||
                    (pc == 4 && ocupado4 == 1) ||
                    (pc == 5 && ocupado5 == 1))
                {
                    float valorPagar;

                    if (pc == 1)
                    {
                        valorPagar = tempo1 * valorHora;
                        ocupado1 = 0;
                        nome1[0] = '\0';
                        tempo1 = 0;
                    }
                    else if (pc == 2)
                    {
                        valorPagar = tempo2 * valorHora;
                        ocupado2 = 0;
                        nome2[0] = '\0';
                        tempo2 = 0;
                    }
                    else if (pc == 3)
                    {
                        valorPagar = tempo3 * valorHora;
                        ocupado3 = 0;
                        nome3[0] = '\0';
                        tempo3 = 0;
                    }
                    else if (pc == 4)
                    {
                        valorPagar = tempo4 * valorHora;
                        ocupado4 = 0;
                        nome4[0] = '\0';
                        tempo4 = 0;
                    }
                    else if (pc == 5)
                    {
                        valorPagar = tempo5 * valorHora;
                        ocupado5 = 0;
                        nome5[0] = '\0';
                        tempo5 = 0;
                    }

                    printf("Valor a pagar: R$ %.2f\n", valorPagar);
                    printf("Computador %d liberado.\n", pc);
                }
                else
                {
                    printf("Computador %d nao esta ocupado.\n", pc);
                }
            }
        }
        else if (opcao == 0)
        {
            printf("Saindo do programa...\n");
        }
        else
        {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
