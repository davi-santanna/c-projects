#include <stdio.h>
#include <stdlib.h>


int maximo(int *valor,int i,  int fim){
    if (i == fim-1){return valor[i];}
    int maior = maximo(valor, i+1, fim);
    if (valor[i]>maior){return valor[i];}
    else{return maior;}
}


int main(){

int *vet;
int tam;

scanf("%d", &tam);

vet = (int*) malloc(tam * sizeof(int));
for (int i = 0; i < tam; i++){
    int val;
    scanf("%d", &val);
    vet[i] = val;
}

printf("%d", maximo(vet, 0, tam));

free(vet);
return 0;
}