#include <stdio.h>
#include <stdlib.h>


int soma(int *vetor, int tam, int valor){
    
    valor += vetor[tam-1];
    if (tam-1 == 0){
        return valor;
    }
    else{
        return soma(vetor, tam-1, valor);
    }
}

int main(){
    int* vet;
    int n;
    scanf("%d",&n);
    
    vet = (int*)malloc(n*sizeof(int));
   
    for (int x=0; x<n; x++){
        int temp;
        printf("vetor[%d]: ", x);
        scanf("%d", &temp);
        vet[x] = temp;
    }

    printf("%d", soma(vet, n, 0));

    free(vet);

    return 0;
}