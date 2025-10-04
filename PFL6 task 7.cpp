#include <stdio.h>
int main() {
    int amount, a=0,b=0,c=0,d=0;
    scanf("%d",&amount);

    while(amount>=25)
	{ a++; amount-=25; }
    while(amount>=10)
	{ b++; amount-=10; }
    while(amount>=5)
	{  c++; amount-=5; }
    while(amount>=1)
	{  d++; amount-=1; }

    printf("25c: %d\n10c: %d\n5c: %d\n1c: %d\n", a,b,c,d);
    return 0;
}

