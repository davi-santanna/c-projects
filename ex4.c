#include <stdlib.h>
#include <stdio.h>

int positivos(int n, int *v1, int *v2, int ind1, int ind2){

    if (ind1 == n){return ind2;}
    else if(v1[ind1] >=  0){

        v2[ind2] = v1[ind1];
        return positivos(n, v1, v2, ind1+1, ind2+1);
    }
    else{return positivos(n, v1, v2, ind1+1, ind2);}
}

int main(){

    int* vet1;
    int* vet2;
    int num;
    scanf("%d", &num);

    vet1 = (int*)malloc(num*sizeof(int));
    vet2 = (int*)malloc(num*sizeof(int));

    for(int x=0; x<num; x++){
        int temp;
        printf("vet[%d] ", x);
        scanf("%d", &temp);
        vet1[x] = temp;
    }
    int total = positivos(num, vet1, vet2, 0, 0);
    printf("Nums positivos: %d\n", total);
    for(int y=0; y<total; y++){
        printf("%d ", vet2[y]);
    }

    free(vet1); free(vet2);
    return 0;
}