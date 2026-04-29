#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int** vet;
    int n,m;
    printf("n, m: ");
    scanf("%d %d",  &n, &m);

    vet = (int**) malloc( n * sizeof(int*));
    
    for(int j = 0; j <n; j++){
        vet[j] = (int*) malloc( m * sizeof(int));
    }
    
    for(int i= 0; i<n; i++){
        for (int j = 0; j<m; j++){
            int temp;
            printf("[%d][%d]: ", i, j);
            scanf("%d", &temp);
            vet[i][j] = temp;
        }
    }

    int* vet_max;
    vet_max = (int*)malloc(n*sizeof(int));

    for(int i= 0; i<n; i++){
        int max = 0;
        for (int j = 0; j<m; j++){
        if (max <= vet[i][j]){max = vet[i][j];}
        }
        vet_max[i] = max;
    }

    for(int i= 0; i<n; i++){
        printf("\n");
        for (int j = 0; j<m; j++){printf("%d ",vet[i][j]);}
    }
    printf("\n");
    for(int i= 0; i<n; i++){printf("%d ", vet_max[i]);}

    for (int i; i<n; i++){
        free(vet[i]);
    }
    free(vet);
    free(vet_max);
    return 0;
}