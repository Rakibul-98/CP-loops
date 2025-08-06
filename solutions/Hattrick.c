// https://www.codechef.com/problems/HATTRICK

#include <stdio.h>

int main()
{
    int T;
    
    scanf("%d", &T);

    for(int i=0; i<T; i++){
        char A, B, C, D, E, F;
        int hattrick = 0;
        scanf(" %c %c %c %c %c %c", &A, &B, &C, &D, &E, &F);
        if(A == 'W' && B == 'W' && C == 'W'){
            hattrick = 1;
        }
        else if(B == 'W' && C == 'W' && D == 'W'){
            hattrick = 1;
        }
        else if(C == 'W' && D == 'W' && E == 'W'){
            hattrick = 1;
        }
        else if(D == 'W' && E == 'W' && F == 'W'){
            hattrick = 1;
        }
        if(hattrick == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    }
    
    
    return 0;
}