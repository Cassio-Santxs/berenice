#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigoDoProduto, quantidadeDeProdutos, formaDePagamento, quantidadeDeParcelas;
    float valorDaCompra, precoDoProduto, valorEntreguePeloCliente, troco;

    printf("Ola, cliente! Seja bem-vindo a nossa loja, estes sao nossos produtos:\n\n");

    printf("\t Codigo \tNome do produto  \tValor unitario (R\$)\n");
    printf("\t 1      \tPao de forma     \tR\$ 7.50\n");
    printf("\t 2      \tPao de centeio   \tR\$ 8.69\n");
    printf("\t 3      \tBroa de milho    \tR\$ 5.00\n");
    printf("\t 4      \tSonho            \tR\$ 4.50\n");
    printf("\t 5      \tTubaina          \tR\$ 3.25\n");

    printf("\nPor favor, digite o codigo do produto desejado: ");
    scanf("%i", &codigoDoProduto);
    getchar();

    switch(codigoDoProduto)
    {

    case 1:
        precoDoProduto = 7.50;
        break;

    case 2:
        precoDoProduto = 8.69;
        break;

    case 3:
        precoDoProduto = 5;
        break;

    case 4:
        precoDoProduto = 4.50;
        break;

    case 5:
        precoDoProduto = 3.25;
        break;

    default:
        printf("\nCodigo invalido, o programa se encerrara.\n");
        return 0;
    }

    printf("\nAgora digite a quantidade do produto desejado: ");
    scanf("%i", &quantidadeDeProdutos);
    getchar();

    valorDaCompra = precoDoProduto * quantidadeDeProdutos;

    printf("\nTotal da compra: R\$%.2f\n", valorDaCompra);

    printf("\nAgora escolha a forma de pagamento. Temos o pagamento A VISTA e o pagamento A PRAZO.\n\nNo pagamento A VISTA, em compras de ate R\$ 50.00, damos 5 porcento de desconto, em compras de R\$ 50.00 a R\$ 99.99 oferecemos 10 porcento de desconto e em compras acima de R\$ 99.99 promovemos 18 porcento de desconto.\n\nNo pagamento A PRAZO, em compras parceladas em ate 3x temos um acrescimo de 5 porcento e, em compras com parcelas acima de 3x, um acrescimo de 8 porcento");

    printf("\n\nDigite 1 para pagamento A VISTA e 2 para pagamento A PRAZO: ");
    scanf("%i", &formaDePagamento);
    getchar();

    switch(formaDePagamento)
    {

    case 1:

        if(valorDaCompra <= 50)
        {
            valorDaCompra = valorDaCompra - (valorDaCompra * 0.05);
        }
        else if((valorDaCompra > 50)&&(valorDaCompra < 100))
        {
            valorDaCompra = valorDaCompra - (valorDaCompra * 0.1);
        }
        else
        {
            valorDaCompra = valorDaCompra - (valorDaCompra * 0.18);
        }

        printf("\nTotal da compra: R\$%.2f\n", valorDaCompra);

        printf("\nPor favor, nos diga o valor que voce ira entregar: ");
        scanf("%f", &valorEntreguePeloCliente);
        getchar();

        if (valorEntreguePeloCliente<valorDaCompra)
        {
            printf("\nValor insuficiente, o programa se encerrara.\n");
            return 0;
        }
        else
        {
            troco = valorEntreguePeloCliente - valorDaCompra;

            printf("\nAqui esta seu troco: R\$%.2f", troco);
        }

        break;

    case 2:
        printf("\n\nPor favor, nos diga a quantidade de parcelas: ");
        scanf("%i", &quantidadeDeParcelas);
        getchar();

        if(quantidadeDeParcelas <= 3)
        {
            valorDaCompra = valorDaCompra + (valorDaCompra * 0.05);
        }
        else
        {
            valorDaCompra = valorDaCompra + (valorDaCompra * 0.08);
        }

        printf("\nTotal da compra: R\$%.2f\n", valorDaCompra);
        break;

    default:
        printf("\nCodigo invalido, o programa se encerrara.\n");
        return 0;
    }

    printf("\n\nObrigado pela compra! Volte sempre.\n\n");
    return 0;
}
