#include <stdlib.h>
#include <stdio.h>

int main(){
    int n,m;
    int **matriz;
    printf("defina o N de colunas: ");
    scanf("%d", &n);

    
    printf("defina o N de linhas: ");
    scanf("%d", &m);
    matriz = (int**) malloc(m * sizeof(int*)); 
    for (int x=0; x<n; x++){
        matriz[x] = (int*) malloc(n*sizeof(int));
    }
    for(int i = 0; i < m; i++){
        
        for(int j = 0; j < n; j++){
            if (i==0 && (j+1)%2 == 1){matriz[i][j]=j+1;}
            else if(i==0 && (j+1)%2 == 0){matriz[i][j]=0;}

            else if (i==1 && (j+1)%2 == 0){matriz[i][j]=j+1;}
            else if (i==1 && (j+1)%2 == 1){matriz[i][j]=0;}

            else if (i==2){matriz[i][j]=j+1;}

            else if (i>2){matriz[i][j] = matriz[i-1][j] + matriz[i-2][j];}  
        }


    }   
    printf("Matriz Final: ");
    for(int i = 0; i < m; i++){
        printf("\n");
        for(int j = 0; j < n; j++){printf("%d ", matriz[i][j]);}
    }  

    for(int i = 0; i < m; i++){
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}