#include <stdio.h>
#include <stdbool.h>
#define SOME_NUMBER 10

int tarefa_2(int num) {
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
    int buffer[SOME_NUMBER] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

    bool failure = false;

    for(int i = 0; i < SOME_NUMBER; i++) {
        int num = tarefa_2(i + 1);
        if(num != buffer[i]) {
            printf("Incorreto: %d-esimo fatorial e %d, nao %d\n", i + 1, buffer[i], num);
            failure = true;
        } else {
            printf("  Correto: %d-esimo fatorial e %d\n", i + 1, buffer[i]);
        }
    }
    return (int)failure;
}
