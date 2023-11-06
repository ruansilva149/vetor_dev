#include <stdio.h>
#include <stdlib.h>



int comparacao(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int vetor[7];
	int i;
	
    for (i = i < 0; i < 7; i++) {
        printf("Digite o numero para a posicao do vetor %d: ", i);
        scanf("%d", &vetor[i]);
        vetor[i] *= 2;
	}
	
	qsort(vetor, 7, sizeof(int), comparacao);
	
    printf("Numeros dobrados:\n");
    for (i = 0; i < 7; i++) {
        printf("%d \n", vetor[i]);
    }
    printf("\n");
    
    return 0;
}

