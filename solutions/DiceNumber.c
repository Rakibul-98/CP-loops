// https://www.codechef.com/problems/DICENUM

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int A1, A2, A3, B1, B2, B3;
        scanf(" %d %d %d %d %d %d", &A1, &A2, &A3, &B1, &B2, &B3);
        int amax = A1;
        int amin = A1;
        if(A2 > amax){
            amax = A2;
        }
        if(A3 > amax){
            amax = A3;
        }
        if(A2 < amin){
            amin = A2;
        }
        if(A3 < amin){
            amin = A3;
        }
        
        
        int a = (amax*100)+(((A1+A2+A3)-(amax+amin))*10)+amin;
        
        int bmax = B1;
        int bmin = B1;
        
        if(B2 > bmax){
            bmax = B2;
        }
        if(B3 > bmax){
            bmax = B3;
        }
        if(B2 < bmin){
            bmin = B2;
        }
        if(B3 < bmin){
            bmin = B3;
        }
        
        
        int b = (bmax*100)+(((B1+B2+B3)-(bmax+bmin))*10)+bmin;
        if(a>b){
           printf("Alice\n"); 
        }else if(b>a){
            printf("Bob\n"); 
        }else{
            printf("Tie\n"); 
        }
        
    }

    return 0;
}
