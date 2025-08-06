// https://www.codechef.com/problems/RIGHTTHERE

#include <stdio.h>

int main()
{
    int N, T, X;
    
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d %d", &N, &X);
        if(N > X){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    
    return 0;
}