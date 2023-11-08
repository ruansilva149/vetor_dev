#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[7];
    int i, e, temp;


    for (i = 0; i < 7; i++) {
        printf("Digite um numero %d: ", i);
        scanf("%d", &vetor[i]);
        vetor[i] *= 2;
    }


    for (i = 0; i < 7 - 1; i++) {
        for (e = 0; e < 7 - i - 1; e++) {
            if (vetor[e] > vetor[e + 1]) {
                temp = vetor[e];
                vetor[e] = vetor[e + 1];
                vetor[e + 1] = temp;
            }
        }
    }

    printf("Valores dobrados:\n");
    for (i = 0; i < 7; i++) {
        printf("%d \n", vetor[i]);
    }

    return 0;
}

