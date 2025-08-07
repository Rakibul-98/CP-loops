// https://www.codechef.com/problems/BRUNCH

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int X, Y;
        scanf(" %d %d", &X, &Y);
        int R = (X/Y);
        if(R>20){
            printf("%d\n", 20);
        }else{
            printf("%d\n", R);
        }
    }

    return 0;
}