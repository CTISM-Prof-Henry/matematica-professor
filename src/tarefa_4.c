#include <stdio.h>
#include <stdbool.h>

#define N_POS 10

void tarefa_4(int a, int b, int *vec) {
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
    int vec[N_POS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int res_6[N_POS] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60};
    int res_7[N_POS] = {7, 14, 21, 28, 35, 42, 49, 56, 63, 70};

    bool failure = false;
    tarefa_4(6, 0, &vec[0]);
    for(int i = 0; i < N_POS; i++) {
        if(vec[i] != res_6[i]) {
            printf("Incorreto: 6*%d + 0 = %d, e nao %d\n", i + 1, res_6[i], vec[i]);
            failure = true;
        }
    }
    tarefa_4(7, 0, &vec[0]);
    for(int i = 0; i < N_POS; i++) {
        if(vec[i] != res_7[i]) {
            printf("Incorreto: 7*%d + 0 = %d, e nao %d\n", i + 1, res_7[i], vec[i]);
            failure = true;
        }
    }

    if(!failure) {
        printf("Tudo certo! Parabens!\n");
    }

    return (int)failure;
}
