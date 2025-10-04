#include<stdio.h>
#include<cmath>
int main(){
	int people;
	float cost,amount=250.50;
	
	printf("Enter number of people:\n");
	scanf("%d",&people);
	cost=people*amount;
	
	
	printf("The roundoff cost will be %.0f:",ceil(cost));
	
	return 0;
	
}
