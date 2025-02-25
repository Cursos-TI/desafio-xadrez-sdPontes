#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define torre 5 //Define quantidade de movimentos para a torre
#define bispo 5 // Define quantidade de movimentos para o bispo
#define rainha 8 //Define quantidade de movimentos para a rainha
#define cavalo 1 //Define quantidade de movimentos para o cavalo

void movimentoCavalo(int a)
{
    /*
        Lógica do movimento do cavalo:
        O valor da constante de #Cavalo é 1. Sendo o valor da constante #cavalo atribuida à variavel a;
        1. O loop externo irá executar, pois i=0 e a=1, deixando a condição i<=a verdadeira, imprimindo o primeiro movimento para cima;
        2. Depois irá testar a condição do loop interno, sendo este falso não irá executar. Apenas quando o valor de I for igual ao de J;
        3. Após irá testar novamente o loop externo sendo este ainda verdadeiro, então executará novamente, imprimindo mais um movimento para cima.
        4. irá testar novamente o loop interno, sendo desta vez a condição verdadeira, pois o valor de i = 1, imprimindo o movimento para a direita.
        5. Ao testar o loop interno novamente a condição já será falsa, sendo j=2 e i=1, não executaráo loop interno novamente;
        6. Ao testar o loop externo novamente a condição será falsa, pois a variável i=2 será maior que a=1;
    */
    for(int i = 0; i <= a; i++)
    {
        printf("Cima, ");
        for (int j = 1; j == i; j++)
        {
            printf("Direita\n");
        }
    }
}


void movimentoBispo (int a)
{
    /*
        LÓGICA DO MOVIMENTO DO BISPO:
        1. O VALOR DA CONSTANTE BISPO = 5 SERÁ ATRIBUÍDA À VARIÁVEL 'A';
        2. ENTRARÁ NO LOOP EXTERNO, VAI DECLARAR A VARIAVEL I E DECLARA VALOR 0 A ELA.
        3. IRA TESTAR A CONDIÇÃO SENDO (I=0) < (A=5), SENDO VERDADEIRO A CONDIÇÃO IRÁ EXECUTAR O LOOP EXTERNO E ACRESCENTARÁ +1 NA VARIAVEL I;
        4. IMPRIMIRÁ A MENSAGEM "CIMA, " E ENTRARÁ NO LOOP INTERNO.
        5. VAI DECLARAR A VARIAVEL J E DECLARA VALOR 0 A ELA.
        6. TESTARÁ A CONDIÇÃO, SENDO ESTA VERDADEIRA PQ J É MENOR QUE 1. LOGO IRÁ ACRESCENTAR MAIS +1 NA VARIÁVEL J.
        7. IRÁ IMPRIMIR A MENSAGEM "DIREITA\N" E TESTAR NOVAMENTE A A CONDIÇÃO DO LOOP INTERNO.
        8. DESTA VEZ AGORA A CONDIÇÃO SERÁ FALSA, POR QUE, O VALOR DE J AGORA É 1.
        9. O LOOP EXTERNO IRÁ CONTINUAR EXECUTANDO, ENTRANDO NO LOOP INTERNO TODA VEZ QUE REINICIA O LOOP, ATÉ O VALOR DE I SER IGUAL A 5;
    */
    for(int i = 0; i < a; i++)
    {
        printf("Cima, ");
        for(int j = 0; j < 1; j++)
        {
            printf("direita\n");
        }
    }
}

void movimentoTorre (int a)
{
    /*
        EXPLICANDO A LÓGICA DOS MOVIMENTOS DA TORRE:
        1. A CONSTANTE TORRE IRÁ ATRIBUIR O VALOR 5 À VARIÁVEL 'A';
        2. SE A FOR MAIOR DO QUE '0' IRÁ IMPRIMIR A MENSAGEM "DIREITA\N";
        3. CHAMARÁ 'A' RECURSIVIDADE MOVIMENTOTORRE E SUBTRAIRA 1 DA VARIÁVEL A;
        4. TODO O PROCESSO IRÁ SE REPETIR ATÉ QUE A SEJA 'A' = 0; 
        5. SENDO ASSIM IRÁ IMPRIMIR A MENSAGEM "DIREITA" 5X;
    */
    if (a > 0)
    {
        printf("direita\n");
        movimentoTorre(--a);
    }
}

void movimentoRainha(int a)
{
    /*
        EXPLICANDO A LÓGICA DO MOVIMENTO DA RAINHA:
        1. A CONSTANTE RAINHA IRÁ ATRIBUIR O VALOR 8 À VARIÁVEL 'A';
        2. SE 'A' FOR MAIOR DO QUE '0' IRÁ IMPRIMIR A MENSAGEM "DIREITA\N";
        3. CHAMARÁ A RECURSIVIDADE MOVIMENTORAINHA E SUBTRAIRA 1 DA VARIÁVEL 'A';
        4. TODO O PROCESSO IRÁ SE REPETIR ATÉ QUE A SEJA 'A' = 0; 
        5. SENDO ASSIM IRÁ IMPRIMIR A MENSAGEM "ESQUERDA" 5X; 
    */
    if (a > 0)
    {
        printf("esquerda\n");
        movimentoRainha(--a);
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //*********************************************MOVIMENTO TORRE
    printf("Movimento torre:\n");
    movimentoTorre(torre);
    printf("\n\n");

    //*********************************************MOVIMENTO BISPO
    printf("Movimento bispo:\n");
    movimentoBispo(bispo);
    printf("\n\n");
    
    //*********************************************MOVIMENTO RAINHA
    printf("Movimento rainha:\n");
    movimentoRainha(rainha);
    printf("\n\n");

    //*********************************************MOVIMENTO CAVALO
    printf("Movimento Cavalo:\n");
    movimentoCavalo(cavalo);
    return 0;
}
