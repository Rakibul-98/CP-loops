// https://codeforces.com/problemset/problem/1560/A

#include <stdio.h>

int main()
{
    int k, t;
    
    scanf("%d", &t);
    
    for(int i=0; i<t; i++){
        scanf("%d", &k);
        int j = 1;
        int count = 0;
        while(count < k){
            if(j % 3 != 0 && j % 10 != 3){
                count++;
            }
            j++;
        }
        printf("%d\n", j-1);
    }
    return 0;
}