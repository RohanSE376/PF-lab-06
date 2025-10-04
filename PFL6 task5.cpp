#include<stdio.h>
int main(){
	int i,n,fact=1;
	printf("Enter value to get factorial:\n");
    scanf("%d",&n);
for(i=1;i<=n;i++){

	fact=i*fact;
    printf("x !%d",i);
    continue;
}	printf("=%d\n",fact);
return 0;
}

