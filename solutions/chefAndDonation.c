// https://www.codechef.com/problems/DNATION

#include <stdio.h>

int main()
{
    int X, Y, T;
    
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        scanf("%d %d", &X, &Y);
        
        printf("%d\n", Y - X);
    }
    return 0;
}