#include <stdio.h>
#include <stdbool.h>

#define N_ROWS 5
#define N_COLS 5

void print_matrix(int n_rows, int n_cols, int *matrix) {
    for(int i = 0; i < n_rows; i++) {
        for(int j = 0; j < n_cols; j++) {
            printf("[%d]", matrix[i * n_cols + j]);
        }
        printf("\n");
    }
}

void tarefa_6(int n_rows, int n_cols, int *matrix) {
    // TODO desenvolva aqui seu código
    return;
    // TODO desenvolva aqui seu código
}

/**
 * Use esta função para testar seu código.
 *
 * Você não precisa entender o que está acontecendo aqui; apenas rode a função e veja se seu código está certo!
 *
 * NÃO A MODIFIQUE! Isso pode causar problemas no testador automático.
 */
int main() {
    int correct[N_ROWS][N_COLS] = {{1, 0, 0, 0, 0}, {1, 1, 0, 0, 0}, {1, 1, 1, 0, 0}, {1, 1, 1, 1, 0}, {1, 1, 1, 1, 1}};

    int matrix[N_ROWS][N_COLS];
    tarefa_6(N_ROWS, N_COLS, &matrix[0][0]);

    bool failure = false;
    for(int i = 0; i < N_ROWS; i++) {
        for (int j = 0; j < N_COLS; j++) {
            if(correct[i][j] != matrix[i][j]) {
                failure = true;
            }
        }
    }
    if(failure) {
        printf("Incorreto! As matrizes nao sao iguais.\n");
        printf("Matriz correta:\n");
        print_matrix(N_ROWS, N_COLS, &correct[0][0]);
    } else {
        printf("Correto!\n");
    }
    printf("Matriz preenchida:\n");
    print_matrix(N_ROWS, N_COLS, &matrix[0][0]);
    return (int)failure;
}
