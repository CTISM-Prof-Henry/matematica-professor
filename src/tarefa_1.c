#include <stdio.h>
#include <stdbool.h>
#define SOME_NUMBER 21

int tarefa_1(int n) {
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
    int first_twenty[SOME_NUMBER] = {-1, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765};

    bool failure = false;

    for(int i = 0; i < SOME_NUMBER; i++) {
        int num = tarefa_1(i);
        if(num != first_twenty[i]) {
            printf("Incorreto: %d-esimo numero e %d, nao %d\n", i, first_twenty[i], num);
            failure = true;
        } else {
            printf("  Correto: %d-esimo numero e %d\n", i, first_twenty[i]);
        }
    }
    return (int)failure;
}