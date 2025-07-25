// // Bibliotecas
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // Constantes
// #define tamanho 10

// // Variáveis
// int lista[tamanho];
// int ordenado[tamanho];
// int opt = -1;
// int qtd;

// // Prototipação
// void menu_mostrar(void);
// void lista_mostrar(void);
// void lista_gerar(void);
// void lista_ler(void);
// void lista_limpar(void);
// void lista_mostrar_ordenado(void);

// // Função Principal
// int main(void) {
//     srand(time(NULL));
//     do {
//         system("cls");
//         lista_mostrar();
//         lista_mostrar_ordenado();
//         menu_mostrar();
//         scanf("%d", &opt);
//         switch (opt) {
//             case 1:
//                 lista_gerar();
//                 break;
//             case 2:
//                 lista_ler();
//                 break;
//             case 3:
//                 lista_limpar();
//                 qtd = bubbleSort(ordenado);
//                 break;
//             case 4:
//                 lista_limpar();
//                 qtd = selectionSort(ordenado, tamanho);
//                 break;
//             case 5:
//                 lista_limpar();
//                 qtd = insertionSort(ordenado, tamanho);
//                 break;
//             case 6:
//                 lista_limpar();
//                 qtd = shellSort(ordenado, tamanho);
//                 break;
//             case 7:
//                 lista_limpar();
//                 qtd = mergeSort(ordenado, tamanho, 0);
//                 break;
//             case 8:
//                 lista_limpar();
//                 qtd = quickSort(ordenado, 0, tamanho - 1, 0);
//                 break;
//             case 9:
//                 lista_limpar();
//                 qtd = heapSort(ordenado, tamanho);
//                 break;

//         }
//     } while (opt != 0);
//     system("pause");
//     return 0;
// }

// // Mostra o conteúdo da lista
// void lista_mostrar(void) {
//     printf("[ ");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", lista[i]);
//     }
//     printf("]\n\n");
// }

// // Mostra o menu
// void menu_mostrar(void) {
//     printf("1 - Gerar lista aleatoriamente\n");
//     printf("2 - Criar lista manualmente\n");
//     printf("3 - Ordenar com bubbleSort\n");
//     printf("4 - Ordenar com selectionSort\n");
//     printf("5 - Ordenar com insertionSort\n");
//     printf("6 - Ordenar com shellSort\n");
//     printf("7 - Ordenar com mergeSort\n");
//     printf("8 - Ordenar com quickSort\n");
//     printf("9 - Ordenar com heapSort\n");
//     printf("0 - Sair...\n\n");
// }

// // Gera uma lista aleatória
// void lista_gerar(void) {
//     for (int i = 0; i < tamanho; i++) {
//         lista[i] = rand() % 50;
//     }
// }

// // Permite que o usuário entre com os valores da lista
// void lista_ler(void) {
//     for (int i = 0; i < tamanho; i++) {
//         system("cls");
//         lista_mostrar();
//         printf("\nDigite o valor para a posicao %d: ", i);
//         scanf("%d", &lista[i]);
//     }
// }

// // Preparar a lista para ordenação
// void lista_limpar(void) {
//     for (int i = 0; i < tamanho; i++) {
//         ordenado[i] = lista[i];
//     }
// }

// // Mostra o conteúdo da lista ordenada
// void lista_mostrar_ordenado(void) {
//     printf("[ ");
//     for (int i = 0; i < tamanho; i++) {
//         printf("%d ", ordenado[i]);
//     }
//     printf("] Tempo = %d iteracoes\n\n", qtd);
// }

// //Função genérica de troca de valores
// void troca(int* a, int* b) {
//     int tmp;
//     tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// //Aplica o método do bubbleSort
// int bubbleSort(int vec[]){
//     int qtd, i, j, tmp;
//     qtd = 0;
    
//     for (i = 0; i < tamanho -1; i++){
//         for (j = i+1; j < tamanho; j++){
//             if (vec[i] > vec[j]){
//                 troca(&vec[i], &vec[j]);
//             }
//             qtd++;
//         }
//     }
//     return(qtd);
// }

// //Aplica o modo selectionSort
// int selectionSort(int vec[], int tam) {
//     int i, j, min, qtd=0;
//         for (i = 0; i < (tam-1); i++) {
//             min = i;
//             for (j = (i+1); j < tam; j++) {
//             if(vec[j] < vec[min]) {
//                 min = j;
//             }
//             qtd++;
//         }
//         if (i != min) {
//             troca(&vec[i], &vec[min]);
//         }
//     }
//     return(qtd);
// }

// //Aplicando o insertionSort
// int insertionSort(int vec[], int tam) {
//     int i, j, qtd=0;
//     for(i = 1; i < tam; i++){
//         j = i;
//         while((vec[j] < vec[j - 1]) && (j!=0)){
//             troca(&vec[j], &vec[j-1]);
//             j--;
//             qtd++;
//         }
//     }
//     return(qtd);
// }

// // Aplica o shellSort
// int shellSort(int vec[], int tam) {
//     int i, j, valor, qtd = 0;
//     int gap = 1;

//     do {
//         gap = 3 * gap + 1;
//     } while (gap < tam);

//     do {
//         gap /= 3;
//         for (i = gap; i < tam; i++) {
//             valor = vec[i];
//             j = i - gap;
//             while (j >= 0 && valor < vec[j]) {
//                 vec[j + gap] = vec[j];
//                 j -= gap;
//                 qtd++;
//             }
//             vec[j + gap] = valor;
//         }
//     } while (gap > 1);

//     return qtd;
// }

// // Aplica o modo mergeSort
// int mergeSort(int vec[], int tam, int qtd) {
//     int meio;

//     if (tam > 1) {
//         meio = tam / 2;

//         qtd = mergeSort(vec, meio, qtd);
//         qtd = mergeSort(vec + meio, tam - meio, qtd);

//         junta(vec, tam);
//     }

//     return (qtd + 1);
// }

// // Junta os pedaços num novo vetor ordenado
// void junta(int vec[], int tam) {
//     int i, j, k;
//     int meio;
//     int* tmp;

//     tmp = (int*) malloc(tam * sizeof(int));
//     if (tmp == NULL) {
//         exit(1);
//     }

//     meio = tam / 2;
//     i = 0;
//     j = meio;
//     k = 0;

//     while (i < meio && j < tam) {
//         if (vec[i] < vec[j]) {
//             tmp[k] = vec[i];
//             ++i;
//         } else {
//             tmp[k] = vec[j];
//             ++j;
//         }
//         ++k;
//     }

//     if (i == meio) {
//         while (j < tam) {
//             tmp[k] = vec[j];
//             ++j;
//             ++k;
//         }
//     } else {
//         while (i < meio) {
//             tmp[k] = vec[i];
//             ++i;
//             ++k;
//         }
//     }

//     for (i = 0; i < tam; ++i) {
//         vec[i] = tmp[i];
//     }

//     free(tmp);
// }

// // Aplica o modo do quickSort
// int quickSort(int vec[], int left, int right, int qtd) {
//     int r;

//     if (right > left) {
//         r = particiona(vec, left, right);
//         qtd = quickSort(vec, left, r - 1, qtd);
//         qtd = quickSort(vec, r + 1, right, qtd);
//     }

//     return (qtd + 1);
// }

// // Divide o vetor em pedaços menores
// int particiona(int vec[], int left, int right) {
//     int i, j;

//     i = left;
//     for (j = left + 1; j <= right; ++j) {
//         if (vec[j] < vec[left]) {
//             ++i;
//             troca(&vec[i], &vec[j]);
//         }
//     }

//     troca(&vec[left], &vec[i]);

//     return i;
// }

// // Garante as propriedades de heap a um nó
// int heapifica(int vec[], int tam, int i) {
//     int e, d, maior, qtd;

//     qtd = 1;
//     e = 2 * i + 1;
//     d = 2 * i + 2;

//     if (e < tam && vec[e] > vec[i]) {
//         maior = e;
//     } else {
//         maior = i;
//     }

//     if (d < tam && vec[d] > vec[maior]) {
//         maior = d;
//     }

//     if (maior != i) {
//         troca(&vec[i], &vec[maior]);
//         qtd += heapifica(vec, tam, maior);
//     }

//     return qtd;
// }

// // Transforma o vetor em uma heap
// int constroiHeap(int vec[], int tam) {
//     int i, qtd;

//     qtd = 0;
//     for (i = tam / 2; i >= 0; i--) {
//         qtd += heapifica(vec, tam, i);
//     }

//     return qtd;
// }

// // Ordena com base na estrutura heap
// int heapSort(int vec[], int tam) {
//     int n, i, qtd;

//     qtd = 0;
//     qtd += constroiHeap(vec, tam);
//     n = tam;

//     for (i = tam - 1; i > 0; i--) {
//         troca(&vec[0], &vec[i]);
//         n--;
//         qtd += heapifica(vec, n, 0);
//     }

//     return qtd;
// }
