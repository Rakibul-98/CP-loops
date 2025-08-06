// https://vjudge.net/problem/CodeForces-1669A/origin

#include <stdio.h>

int main()
{
    int t, r;
    
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &r);
        if(r <= 1399){
            printf("Division 4\n");
        }else if(r <= 1599){
            printf("Division 3\n");
        }else if(r <= 1899){
            printf("Division 2\n");
        }else{
          printf("Division 1\n");
        }
    }
    
    return 0;
}