// https://www.codechef.com/problems/CHESS_PAIR

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N, X, R;
        scanf(" %d %d", &N, &X);
        R = X-((N*2)-X);
        if(R<0){
            printf("%d\n", 0);
        }else{
            printf("%d\n", R);
        }
    }

    return 0;
}