#ifndef BST_H
#define BST_H

/*
 * TAD — Árvore Binária de Busca (BST)
 *
 * Funções disponíveis:
 *   bst_criar_no(valor)            — aloca e retorna novo nó
 *   bst_inserir_no(raiz, valor)    — insere valor e retorna raiz
 *   bst_liberar_arvore(raiz)       — libera toda a memória da árvore
 *   bst_imprimir_in_order(raiz)    — imprime valores em ordem crescente
 */

/* Estrutura do nó da BST */ // struct de nó com ponteiros esq, dir e valor inteiro
typedef struct regInt
{
    struct regInt* esq;
    struct regInt* dir;
    int val;
} RegInt;

/* Protótipos */
// criar um novo nó com o valor fornecido
RegInt* bst_criar_no(int valor);
// inserir um valor na BST, retornando a nova raiz da árvore
RegInt* bst_inserir_no(RegInt* raiz, int valor);
// libera recursivamente todos os nós da árvore
void bst_liberar_arvore(RegInt* raiz);
// imprime os valores em ordem crescente (in-order traversal)
void bst_imprimir_in_order(RegInt* raiz);

#endif