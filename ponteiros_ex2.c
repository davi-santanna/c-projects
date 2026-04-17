#include <stdlib.h>
#include <stdio.h>

void rota_1_direita(int* vetor, int tamanho){

    int ultimo = vetor[tamanho-1];
    for (int i = tamanho-1; i > 0; i--){
        vetor[i] = vetor[i-1];
    }
    vetor[0] = ultimo;
}

int main(){

    int tam_vet = 0;
    int *vet;

    printf("Tamanho do vetor:\n");
    scanf("%d", &tam_vet);

    vet = (int*) malloc(tam_vet * sizeof(int));

    int valor = 0;

    for (int x = 0; x < tam_vet; x++){
        printf("defina vetor %d\n", x+1);
        scanf("%d", &vet[x]);
    }

    int n;
    printf("Vetor: ");
    for (int x = 0; x < tam_vet; x++){printf("%d ", vet[x]);}
    printf("\n");
    printf("Defina N de rotacoes:\n");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        rota_1_direita(vet, tam_vet);
    }

    printf("Vetor Rotacionado: ");
    for (int x = 0; x < tam_vet; x++){printf("%d ", vet[x]);}
    printf("\n");

    free(vet);

    return 0;
}