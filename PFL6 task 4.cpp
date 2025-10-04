#include <stdio.h>
int main() {
    int n, r, sum=0, t;
    printf("Enter a number:\n");
    scanf("%d",&n);
    t=n;
    while(t>0){
        r=t%10;
        sum+=r*r*r;
        t/=10;
    }
    if(sum==n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}

