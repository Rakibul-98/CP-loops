// https://www.codechef.com/problems/CANDIVIDE

#include <stdio.h>

int main()
{
    int N, T;
    
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        scanf("%d", &N);
        if(N%3 != 0){
            printf("NO\n");
        }else{
           printf("YES\n"); 
        }
    }
    
    return 0;
}