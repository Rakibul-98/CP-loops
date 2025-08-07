// https://atcoder.jp/contests/abc151/tasks/abc151_b?lang=en

#include <stdio.h>

int main() {
    int N, K, M;
    scanf(" %d %d %d", &N, &K, &M);
    
    int sum = 0;
    for(int i=1; i<N; i++){
        int A;
        scanf(" %d", &A);
        sum += A;
    }
    int req = ((N*M) - sum);
    if(req < 0){
        printf("%d\n", 0);
    }else if(req > K){
        printf("%d\n", -1);
    }else{
        printf("%d\n", req);
    }
    return 0;
}
