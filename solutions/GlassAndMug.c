// https://atcoder.jp/contests/abc332/tasks/abc332_b?lang=en

#include <stdio.h>

int main() {
    int G, M, K;
    
    scanf("%d %d %d", &K, &G, &M);
    
    int g1 = 0;
    int m1 = 0;
    
    for (int i = 0; i < K; i++) {
        if (g1 == G) {
            g1 = 0;
        }
        else {
            if (m1 == 0) {
                m1 = M;
            }
            else {
                int transfer;
                if ((G - g1) < m1) {
                    transfer = G - g1;
                }
                else {
                    transfer = m1;
                }
                g1 += transfer;
                m1 -= transfer;
            }
        }
    }
    
    printf("%d %d\n", g1, m1);
    return 0;
}