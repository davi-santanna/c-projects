#include <stdlib.h>
#include <stdio.h>


int sequencia (int n, int p , int ind){
    if( ind == p){return 1;}
    printf("%d, ", n);
    if(n % 5 == 0){n = n - 4;}
    else{n = n+3;}
    return sequencia(n, p, ind+1);

}

int main(){

    int n,p;
    printf("n, p: ");
    scanf("%d %d", &n, &p);
    sequencia(n, p, 0);

    return 0;}