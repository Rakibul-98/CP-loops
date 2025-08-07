// https://www.codechef.com/problems/FAIRSHARE

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int K, N;
        scanf(" %d %d", &N, &K);
        printf("%d\n", N-((N/(K+1))*K));
    }
    return 0;
}