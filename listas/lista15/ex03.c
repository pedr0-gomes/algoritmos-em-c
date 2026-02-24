/*
Lista: 15
Exercício: 03
Enunciado do exercício: Calculando a altura da árvore
A altura de uma árvore binária é definida como o tamanho do maior caminho da raiz até uma
das folhas da árvore.

Objetivo: Escreva um programa que leia uma árvore binária e calcule a sua altura.

Entradas: raiz da árvore binária (ponteiro para nó)
Saídas: altura da árvore binária (inteiro)

Autor: Pedro Gomes
Data: 23/02/2026

-----------------------------------------
PSEUDOCODE (OPCIONAL)
-----------------------------------------

// PSEUDOCODE-START

altura_arv_rec(p)
    Se (p = NULO) Retorna(0)
    c1 = altura_arv_rec(p->esq)
    c2 = altura_arv_rec(p->dir)
    Se (c1 > c2) Retorna (c1 + 1)
    Retorna (c2 + 1)

// PSEUDOCODE-END
*/

#include <stdio.h>
#include "bst.h"

int altura_arv_rec(RegInt* p);

int main()
{
    RegInt* raiz = NULL;

    raiz = bst_inserir_no(raiz, 8);
    raiz = bst_inserir_no(raiz, 3);
    raiz = bst_inserir_no(raiz, 10);
    raiz = bst_inserir_no(raiz, 1);
    raiz = bst_inserir_no(raiz, 6);
    raiz = bst_inserir_no(raiz, 14);
    raiz = bst_inserir_no(raiz, 4);
    raiz = bst_inserir_no(raiz, 7);
    raiz = bst_inserir_no(raiz, 13);

    printf("Altura = %d\n", altura_arv_rec(raiz));

    bst_liberar_arvore(raiz);
    return 0;
}

int altura_arv_rec(RegInt* p)
{
    if (p == NULL) return 0;
    int c1 = altura_arv_rec(p->esq);
    int c2 = altura_arv_rec(p->dir);
    if (c1 > c2) return (1 + c1);
    return (1 + c2);
}
