// https://www.codechef.com/problems/SPCP2

#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        int X, N;
        scanf(" %d %d", &X, &N);
        
        double r = ceil((double)(N - (X*100))/100);
        if(r <= 0){
            r = 0;
        }
        printf("%0.lf\n", r );
        
    }
    
    
    return 0;
}