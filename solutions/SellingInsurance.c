// https://www.codechef.com/problems/AGENTCHEF

#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int X;
        scanf(" %d", &X);
        printf("%0.lf\n",ceil(100/(X*0.2))) ;
    }

    return 0;
}
