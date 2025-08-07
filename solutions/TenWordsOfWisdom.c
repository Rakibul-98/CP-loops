// https://vjudge.net/problem/CodeForces-1850B/origin

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N;
        int max = 0;
        int w = -1;
        scanf(" %d", &N);
        for(int i=1; i<=N; i++){
            int a, b;
            scanf(" %d %d", &a, &b);
            if(a<=10){
                if(b > max){
                    max=b;
                    w=i;
                }
            }
        }
        printf("%d\n", w);
    }

    return 0;
}
