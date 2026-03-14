#include <stdio.h>
int main() {
    char ProdutoA[50] = "Produto A";
    char ProdutoB[50] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;


    int resultadoA, resultadoB;

     //exibir informações do produto A e B
        printf("Produto %s tem estoque de %u unidades e valor unitario de R$ %.2f\n", ProdutoA, estoqueA, valorA);
        printf("Produto %s tem estoque de %u unidades e valor unitário de R$ %.2f\n", ProdutoB, estoqueB, valorB);



     //Comparacoes com o valor minimo de estoque
resultadoA = estoqueA >= estoqueMinimoA;
resultadoB = estoqueB >= estoqueMinimoB;    
    printf("\nComparacao do estoque do Produto A com o estoque minimo: %s\n", resultadoA ? "Suficiente" : "Insuficiente");
    printf("Comparacao do estoque do Produto B com o estoque minimo: %s\n", resultadoB ? "Suficiente" : "Insuficiente");

     //comparacoes entre valores totais dos produtos

     valorTotalA = valorA * estoqueA;
     printf("\nValor Total em estoque produto A R$ %.2f\n",valorTotalA);

     valorTotalB = valorB * estoqueB;
     printf("Valor Total em estoque produto B R$ %.2f\n",valorTotalB);

        printf("\nO valor total em estoque do Produto A (R$  %.2f) é maior que o do Produto B (R$ %.2f)?\n",  estoqueA * valorA > estoqueB * valorB);
}
