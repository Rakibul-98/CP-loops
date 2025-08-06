// https://www.codechef.com/problems/DONDRIVE

#include <stdio.h>

int main()
{
    int N, T, X;
    
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d", &N, &X);
        printf("%d\n", N - X);
    }
    
    return 0;
}