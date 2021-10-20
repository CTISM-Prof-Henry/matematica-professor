#include <stdio.h>
#include <stdbool.h>
#define N_VALUES 7
#define P_VALUES 2

#define P_START_VALUE 3
#define N_START_VALUE 4

int tarefa_2(int n, int p) {
    // TODO desenvolva aqui seu código
    return -1;
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
    bool failure = false;

    if(tarefa_2(1, 2) != 0) {
        printf("Incorreto: retorne 0 caso p > n\n");
        return 1;
    }
    if(tarefa_2(2, 0) != 0) {
        printf("Incorreto: retorne 0 caso p == 0\n");
        return 1;
    }
    if(tarefa_2(0, 1) != 0) {
        printf("Incorreto: retorne 0 caso n == 0\n");
        return 1;
    }
    int buffer[P_VALUES][N_VALUES] = {
            {24, 60, 120, 210, 336, 504, 720},
            {24, 120, 360, 840, 1680, 3024, 5040}
    };

    for(int i = 0; i < P_VALUES; i++) {
        for(int j = 0; j < N_VALUES; j++) {
            int res = tarefa_2(j + N_START_VALUE, i + P_START_VALUE);
            if(res != buffer[i][j]) {
                printf(
                        "Incorreto: sao %d arranjos de %d elementos arranjados em grupos de %d, nao %d\n",
                        buffer[i][j],
                        j + N_START_VALUE,
                        i + P_START_VALUE,
                        res
                );
                failure = true;
            }
        }
    }
    if(!failure) {
        printf("Tudo correto! Parabens!\n");
    }

    return (int)failure;
}
