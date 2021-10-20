# Trabalho Algoritmos e Programação - Lista de exercícios 

## Instruções

1. Esta lista possui 6 exercícios. Cada um deles vale a mesma nota. Faça todos para gabaritar a lista!
2. Para cada exercício, existe um arquivo de código-fonte correspondente no repositório (por exemplo, para a primeira 
   tarefa, existe um arquivo chamado `src/tarefa_1.c`). Modifique a função `tarefa_1`, dentro do arquivo `tarefa_1.c`, 
   para resolver o exercício.
3. **Não modifique a função main.** Ela possui um testador feito para auxiliá-lo na resolução do exercício!

## Exercícios

1. Escreva uma função que, dado um número `n`, retorna o n-ésimo número de 
   [Fibonacci](https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Fibonacci). Lembrando que o primeiro número de Fibonacci é 1, 
   o segundo número de Fibonacci é 1, e todos os números subsequentes são a soma dos dois números de Fibonacci imediatamente 
   anteriores. 
   * Primeiros 10 números de Fibonacci: `1, 1, 2, 3, 5, 8, 13, 21, 34, 55`
   * Exemplo \#1: `n = 5` Saída: `5`
   * Exemplo \#2: `n = 9` Saída: `34` 
   * Mais informações no [WolframAlpha](https://www.wolframalpha.com/input/?i=first+10+fibonacci+numbers)
2. Escreva uma função que calcule o fatorial de um número inteiro positivo `n`.
   * Exemplo \#1: `1! = 1`
   * Exemplo \#2: `2! = 2 * 1 = 2`
   * Exemplo \#3: `3! = 3 * 2 * 1 = 6`
   * Exemplo \#4: `10! = 10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1 = 3628800`
   * Mais informações no [WolframAlpha](https://www.wolframalpha.com/input/?i=5%21)
3. Escreva uma função que, dados dois números `n` e `p`, onde `n` é o número de elementos, e `p` o número de itens a serem
   arranjados por vez, calcule quantos **arranjos simples** de `p` itens podem ser feitos com estes `n` elementos
   * Exemplo \#1: `n = 5` e `p = 3` Saída: `60` ([WolframAlpha](https://www.wolframalpha.com/input/?i=n%21%2F%28n+-+p%29%21+with+n+%3D+5+and+p+%3D+3))
   * Exemplo \#2: `n = 10` e `p = 5` Saída: `30240` ([WolFramAlpha](https://www.wolframalpha.com/input/?i=n%21%2F%28n+-+p%29%21+with+n+%3D+10+and+p+%3D+5))
   * Mais informações no [QueroBolsa](https://querobolsa.com.br/enem/matematica/arranjo)
4. Escreva uma função que dado dois números por `a` e `b`, os arranje em uma função polinomial de primeiro grau 
   (função afim) `y = ax + b` e retorne os 10 valores de `y` para os seguintes 10 valores de x: `0, 1, 2, 3, 4, 5, 6, 7, 8, 9`.
   Exemplo: `a = 1` e `b = -2`
   Saída da função: `-2, -1, 0, 1, 2, 3, 4, 5, 6, 7`  
5. Escreva uma função que retorne a `n`-ésima letra do alfabeto.
    * Exemplo \#1: `n = 1` Saída: `a`
    * Exemplo \#2: `n = 26` Saída: `z`
    * Dica: [Tabela ASCII](https://pt.wikipedia.org/wiki/ASCII)
6. Escreva uma função que preenche uma matriz 5x5: o triângulo inferior de 1s, e o triângulo superior de zeros.
    Saída do programa:
    ```
    1 0 0 0 0
    1 1 0 0 0
    1 1 1 0 0
    1 1 1 1 0
    1 1 1 1 1
    ```
