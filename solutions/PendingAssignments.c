// https://www.codechef.com/problems/ASSIGNMNT

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int X, Y, Z;
        scanf(" %d %d %d", &X, &Y, &Z);
        
        if((X*Y)<=(Z*24*60)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}