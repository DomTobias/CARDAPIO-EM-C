#include <stdio.h>
#include <stdlib.h>

int quant = 0;
int pedidos[100];

void prato_principal() {
    printf("1-Picanha ao Molho de Vinho \n");
    printf("Preco: R$ 45,00 \n\n");

    printf("2-Churrasco Misto \n");
    printf("Preco: R$ 55,00 \n\n");

    printf("3-Frango Grelhado \n");
    printf("Preco: R$ 35,00 \n\n");

    printf("4-Costela ao Molho de BBQ \n");
    printf("Preco: R$ 50,00 \n\n");

    printf("5-Linguica com Queijo Coalho \n");
    printf("Preco: R$ 40,00 \n\n");
}

void pedido() {
    int ped;
    char adi;
    float total = 0.0;

    float ped1 = 45.00;
    float ped2 = 55.00;
    float ped3 = 35.00;
    float ped4 = 50.00;
    float ped5 = 40.00;

    do {
        printf("Por favor, informe o numero do prato desejado: ");
        scanf("%d", &ped);

        printf("\n");

        switch (ped) {
            case 1:
                printf("Picanha ao Molho de Vinho Adicionado\n");
                total += ped1;
                pedidos[quant] = 1;
                quant++;
                break;

            case 2:
                printf("Churrasco Misto Adicionado\n");
                total += ped2;
                pedidos[quant] = 2;
                quant++;
                break;

            case 3:
                printf("Frango Grelhado Adicionado\n");
                total += ped3;
                pedidos[quant] = 3;
                quant++;
                break;

            case 4:
                printf("Costela ao Molho de BBQ Adicionado\n");
                total += ped4;
                pedidos[quant] = 4;
                quant++;
                break;

            case 5:
                printf("Linguica com Queijo Coalho Adicionado\n");
                total += ped5;
                pedidos[quant] = 5;
                quant++;
                break;

            default:
                printf("Prato Invalido. Tente novamente.\n");
                continue;
        }

        printf("\n");

        printf("Deseja adicionar mais um prato? [S/N]: ");
        getchar();
        scanf("%c", &adi);

    } while (adi == 'S' || adi == 's');
    
    system("cls");
    
    printf("\nTotal do pedido: R$ %.2f\n", total);
}

void listar_pedidos() {
    int i;

    printf("\nPratos escolhidos:\n\n");
    for (i = 0; i < quant; i++) {
        switch (pedidos[i]) {
            case 1:
                printf("Picanha ao Molho de Vinho\n\n");
                break;
            case 2:
                printf("Churrasco Misto\n\n");
                break;
            case 3:
                printf("Frango Grelhado\n\n");
                break;
            case 4:
                printf("Costela ao Molho de BBQ\n\n");
                break;
            case 5:
                printf("Linguica com Queijo Coalho\n\n");
                break;
            default:
                printf("Erro\n\n");
        }
    }
}

int main() {
    printf("Churrascaria Fogo na Brasa \n\n");

    prato_principal();
    pedido();
    listar_pedidos();

    printf("\nObrigado por realizar seu pedido!\n");
    return 0;
}
