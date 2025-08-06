// https://www.codechef.com/problems/AGEING

#include <stdio.h>

int main()
{
    int X, T;
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        scanf("%d", &X);
        printf("%d\n", X - 10);
    }
    return 0;
}