// https://www.codechef.com/problems/PIZZAC

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N;
        scanf(" %d", &N);
        
        if(N == 1 || N%2 == 0){
           printf("YES\n"); 
        }
        else{
            printf("NO\n"); 
        }
    }

    return 0;
}
