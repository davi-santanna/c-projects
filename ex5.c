#include <stdlib.h>
#include <stdio.h>

int sequencia(int total,int *v1, int ind){

    if (ind == total-1){return 1;}
    else if (v1[ind] % 5 == 0){
        v1[ind+1] = v1[ind]-4;
        return sequencia(total, v1, ind+1);
    }
    else{
        v1[ind+1] = v1[ind] + 3;
        return sequencia(total, v1, ind+1);
    }

}

int main(){

    int n,p;
    printf("n, p: ");
    scanf("%d %d", &n, &p);
    int* vet1;
    vet1 = (int*) malloc (p * sizeof(int));
    vet1[0] = n;
    sequencia(p, vet1, 0);
    for(int x=0; x<p; x++){
        printf("%d, ", vet1[x]);
    }
    free(vet1);
    return 0;
}