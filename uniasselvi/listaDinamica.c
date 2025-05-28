/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definindo a estrutura da lista
typedef struct no {
    int dado;
    struct no *proximo;
} no;

typedef no* ptr_no;

// Variáveis globais
ptr_no lista;
int op;

// Prototipação
void menu_mostrar();
void menu_selecionar(int op);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

// Função Principal
int main() {
    srand(time(NULL));
    op = 1;

    // Criando o primeiro nó da lista
    lista = (ptr_no) malloc(sizeof(no));
    lista->dado = 0;
    lista->proximo = NULL;

    // Laço principal
    while (op != 0) {
        system("cls");
        menu_mostrar();
        scanf("%d", &op);
        menu_selecionar(op);
    }

    system("pause");
    return 0;
}

// Mostra o menu de opções
void menu_mostrar() {
    lista_mostrar(lista);
    printf("\n\nEscolha uma das opções:\n");
    printf("1 - Inserir no final da Lista\n");
    printf("2 - Remover um item da Lista\n");
    printf("0 - Sair\n\n");
}

// Executa a opção escolhida no menu
void menu_selecionar(int op) {
    switch (op) {
        case 1:
            lista_inserir(lista);
            break;
        case 2:
            lista_remover(lista);
            break;
    }
}

// Insere um elemento no final da Lista
void lista_inserir(ptr_no lista) {
    while (lista->proximo != NULL) {
        lista = lista->proximo;
    }

    lista->proximo = (ptr_no) malloc(sizeof(no));
    lista = lista->proximo;
    lista->dado = rand() % 100;
    lista->proximo = NULL;
}

// Remove um elemento da Lista
void lista_remover(ptr_no lista) {
    int dado;
    ptr_no anterior = NULL;

    printf("\n\nDigite o valor a ser removido: ");
    scanf("%d", &dado);

    while (lista != NULL && lista->dado != dado) {
        anterior = lista;
        lista = lista->proximo;
    }

    if (lista != NULL && anterior != NULL) {
        anterior->proximo = lista->proximo;
        free(lista);
    } else if (lista != NULL && anterior == NULL) {
        // Se o item está no primeiro nó (não é o sentinela)
        printf("Não é possível remover o primeiro nó inicial (sentinela).\n");
        system("pause");
    } else {
        printf("Elemento não encontrado.\n");
        system("pause");
    }
}

// Mostra o conteúdo da Lista
void lista_mostrar(ptr_no lista) {
    system("cls");
    printf("Lista: ");
    while (lista != NULL) {
        printf("%d ", lista->dado);
        lista = lista->proximo;
    }
    printf("\n");
}*/