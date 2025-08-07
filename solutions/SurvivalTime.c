// https://vjudge.net/problem/CodeChef-FIZZBUZZ23_2/origin

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int N, X, D;
        scanf(" %d %d %d", &N, &X, &D);
        printf("%d\n", (N/(5*X))+D) ;
    }

    return 0;
}
