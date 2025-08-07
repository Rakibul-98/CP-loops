// https://vjudge.net/problem/CodeChef-SURPLUS/origin

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int A1, A2, B1, B2;
        scanf(" %d %d %d %d", &A1, &A2, &B1, &B2);
        int C = (A2-A1)+(B2-B1);
        if(C>0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}