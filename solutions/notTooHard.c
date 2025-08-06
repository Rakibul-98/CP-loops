// https://atcoder.jp/contests/abc328/submissions/me

#include <stdio.h>

int main()
{
    int N, X, S;
    
    scanf("%d %d", &N, &X);
    int total = 0;
    
    for(int i=0; i<N; i++){
        scanf("%d", &S);
        if(S<= X){
            total += S;
        }
    }
    printf("%d\n", total);
    return 0;
}