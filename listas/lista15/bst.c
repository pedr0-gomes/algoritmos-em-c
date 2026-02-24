#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

// aloca memoria, inicializa val, esq = NULL< dir = NULL, trata falha de malloc
RegInt* bst_criar_no(int valor)
{
    RegInt* novo = (RegInt*) malloc(sizeof(RegInt));
    if (novo == NULL)
    {
        printf("Erro na alocacao da memoria\n");
        exit(1);
    }
    novo->val = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

// insere novo nó criado e retorna a raiz com o elemento inserido
RegInt* bst_inserir_no(RegInt* raiz, int valor)
{
    if (raiz == NULL) return bst_criar_no(valor);

    if (valor < raiz->val)
    {
        raiz->esq = bst_inserir_no(raiz->esq, valor);
    }
    else if (valor > raiz->val)
    {
        raiz->dir = bst_inserir_no(raiz->dir, valor);
    }
    // se valor == raiz->val, não insere (não permite duplicatas)

    return raiz;
}

// libera recursivamente os nós da árvore
void bst_liberar_arvore(RegInt* raiz)
{
    if (raiz == NULL) return;

    bst_liberar_arvore(raiz->esq);
    bst_liberar_arvore(raiz->dir);
    free(raiz);
}

// imprime os valores em ordem crescente (in-order traversal)
void bst_imprimir_in_order(RegInt* raiz)
{
    if (raiz == NULL) return;

    bst_imprimir_in_order(raiz->esq);
    printf("%d ", raiz->val);
    bst_imprimir_in_order(raiz->dir);
}