#include <stdio.h>
#include <stdbool.h>
#define N_CHARS 6
#define START_CHAR 97

char tarefa_5(int n) {
    // TODO desenvolva aqui seu código
    return 'a';
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
    char some_chars[N_CHARS] = {'a', 'f', 'k', 'p', 'u', 'z'};
    int some_indices[N_CHARS] = {0, 5, 10, 15, 20, 25};

    bool failure = false;

    for(int i = 0; i < N_CHARS; i++) {
        if(tarefa_5(some_indices[i]) != some_chars[i]) {
            printf("Incorreto: ");
            failure = true;
        } else {
            printf("  Correto: o %d-esimo caractere no alfabeto e \'%c\'\n", some_indices[i], some_chars[i]);
        }
    }
    return (int)failure;
}