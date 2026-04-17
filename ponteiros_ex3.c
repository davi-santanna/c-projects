#include <stdio.h>
#include <stdlib.h>


int main(){

    int **matriz;
    int n, m;
    printf("Defina o numero de linhas da matriz:\n");
    scanf("%d", &n);
    printf("Defina o numero de colunas da matriz:\n");
    scanf("%d", &m);

    matriz = (int**) malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        matriz[i] = (int*) malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            int val;
            printf("defina valor do vetor [%d][%d]: ", i, j);
            scanf ("%d", &val);
            matriz[i][j] = val;
        }
    }

    printf("Matriz: ");
    for (int i = 0; i < n; i++){
        printf("\n");
        for (int j = 0; j < m; j++){
            printf("%d ", matriz[i][j]);

        }
    }
    int simetrica = 1;
    for (int i = 0; i < n; i++){
        if (simetrica ==0){break;}
        for (int j = 0; j < m; j++){
            if (matriz[i][j] != matriz[j][i]){
                simetrica = 0;
                break;
            }
        }
    }
    printf("\n");
    if (simetrica == 1){printf("Matriz simetrica");}
    else{printf("Matriz nao simetrica");}

    return 0;
}