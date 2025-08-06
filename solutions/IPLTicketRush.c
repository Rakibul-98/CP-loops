// https://www.codechef.com/problems/IPLTRSH

#include <stdio.h>

int main()
{
    int N, M, T;
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        scanf("%d %d", &N, &M);
        if(N>M){
            printf("%d\n", N - M);
        }else{
            printf("%d\n", 0);
        }
    }
    return 0;
}