#include<stdio.h>
int main(){
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	
	if(num & 1){
		printf("Odd");
	}else{
		printf("Even");
	}
	return 0;
}
