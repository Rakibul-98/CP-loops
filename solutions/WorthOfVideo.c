// https://www.codechef.com/problems/VIDEOWORTH

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int S;
        scanf(" %d", &S);
        printf("%d\n", S*24*1000 );
    }
    return 0;
}