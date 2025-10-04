#include<stdio.h>
#include<cmath>
int main(){
	
	int A,P,n,t,K;
	float r;
	printf("Enter value of P,n,t and r:\n");
	scanf("%d %d %d %f",&P,&n,&t,&r);
	A=P*pow(1+r/n,n*t);
	
     
    printf("The value of future investment will be : %d",A);
    return 0;
}
