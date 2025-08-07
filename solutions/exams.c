// https://www.codechef.com/problems/EXAMCHEF

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int X, Y, Z;
        scanf(" %d %d %d", &X, &Y, &Z);
        double p = (double)(Z*100)/(X*Y);
        if(p > 50){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}