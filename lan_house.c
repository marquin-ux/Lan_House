#include <stdio.h>

int main()
{
    float valorHora = 5.0;

    // Status dos computadores: 0 = livre, 1 = ocupado
    int ocupado1 = 0, ocupado2 = 0, ocupado3 = 0, ocupado4 = 0, ocupado5 = 0;

    // Nome dos locadores
    char nome1[50] = "", nome2[50] = "", nome3[50] = "", nome4[50] = "", nome5[50] = "";

    // Tempo de uso em horas
    float tempo1 = 0, tempo2 = 0, tempo3 = 0, tempo4 = 0, tempo5 = 0;

    int opcao;
    int pc;

    do
    {
        printf("\n=== LAN HOUSE ===\n");
        printf("1 - Mostrar computadores\n");
        printf("2 - Reservar computador (Check-in)\n");
        printf("3 - Finalizar aluguel (Check-out)\n");
        printf("0 - Sair\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            // TODO: implementar mostrar status dos computadores
            break;

        case 2:
            // TODO: implementar reserva de computador
            break;

        case 3:
            // TODO: implementar finalização do aluguel
            break;

        case 0:
            printf("Saindo do programa...\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}
