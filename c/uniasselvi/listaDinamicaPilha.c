// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // Definindo a estrutura da fila
// typedef struct no {
//     int dado;
//     struct no *proximo;
// } no;

// typedef no* ptr_no;

// // Ponteiros globais para início e fim da fila
// ptr_no inicio = NULL;
// ptr_no fim = NULL;
// int op;

// // Prototipação
// void menu_mostrar();
// void menu_selecionar(int op);
// void fila_inserir();
// void fila_remover();
// void fila_mostrar();

// // Função Principal
// int main() {
//     srand(time(NULL));
//     op = 1;

//     while (op != 0) {
//         system("cls");
//         menu_mostrar();
//         scanf("%d", &op);
//         menu_selecionar(op);
//     }

//     system("pause");
//     return 0;
// }

// // Mostra o menu de opções
// void menu_mostrar() {
//     fila_mostrar();
//     printf("\n\nEscolha uma das opções:\n");
//     printf("1 - Inserir no final da fila\n");
//     printf("2 - Remover no início da fila\n");
//     printf("0 - Sair\n\n");
// }

// // Executa a opção escolhida
// void menu_selecionar(int op) {
//     switch (op) {
//         case 1:
//             fila_inserir();
//             break;
//         case 2:
//             fila_remover();
//             break;
//     }
// }

// // Insere um elemento no final da fila
// void fila_inserir() {
//     ptr_no novo = (ptr_no) malloc(sizeof(no));
//     novo->dado = rand() % 100;
//     novo->proximo = NULL;

//     if (inicio == NULL) {
//         inicio = novo;
//         fim = novo;
//     } else {
//         fim->proximo = novo;
//         fim = novo;
//     }
// }

// // Remove o primeiro elemento da fila
// void fila_remover() {
//     if (inicio == NULL) {
//         printf("Fila vazia!\n");
//         system("pause");
//         return;
//     }

//     ptr_no temp = inicio;
//     inicio = inicio->proximo;
//     free(temp);

//     if (inicio == NULL) {
//         fim = NULL; // Fila ficou vazia
//     }
// }

// // Mostra o conteúdo da fila
// void fila_mostrar() {
//     system("cls");
//     printf("Fila: ");
//     ptr_no atual = inicio;
//     while (atual != NULL) {
//         printf("%d ", atual->dado);
//         atual = atual->proximo;
//     }
//     printf("\n");
// }