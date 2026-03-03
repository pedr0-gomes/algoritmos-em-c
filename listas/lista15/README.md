# Lista 15 — Árvores Binárias de Busca

Exercícios da Lista 15 implementados em C, organizados em torno de um TAD BST compartilhado.

## Estrutura

lista15/
├── bst.h          — interface do TAD (struct + protótipos)
├── bst.c          — implementação do TAD
├── template.c     — esqueleto para novos exercícios
├── Makefile       — regras de compilação
└── ex03.c         — altura da árvore

## Como compilar

Entre na pasta lista15/ e execute:

make exNN

Exemplo:

make ex03
.\ex03.exe

## TAD BST — funções disponíveis

| Função                        | O que faz                        |
|-------------------------------|----------------------------------|
| bst_criar_no(valor)           | Aloca e retorna novo nó          |
| bst_inserir_no(raiz, valor)   | Insere valor e retorna raiz      |
| bst_liberar_arvore(raiz)      | Libera toda a memória da árvore  |
| bst_imprimir_in_order(raiz)   | Imprime valores em ordem crescente |

## Convenção de commits

tipo(escopo): mensagem curta

Tipos: feat · fix · refactor · docs · build