// https://codeforces.com/problemset/problem/1352/A

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        
        int count = 0;
        int position = 1;

        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0) {
                count++;
            }
            temp /= 10;
            position *= 10;
        }

        printf("%d\n", count);

        position = 1;
        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0) {
                printf("%d ", digit * position);
            }
            temp /= 10;
            position *= 10;
        }
        printf("\n");
    }

    return 0;
}