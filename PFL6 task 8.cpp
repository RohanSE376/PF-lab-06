#include<stdio.h>
#include<cmath>
int main(){
	
	float M,I,S;
	
	printf("Enter value Intensity of quake:\n");
	
	scanf("%f",&I);
	
	printf("Enter value of Standard reference:\n");
	
	scanf("%f",&S);
	M=log10(I/S);
    printf("M = log10(%.2f / %.2f) = %.2f\n", I, S, M); 
	return 0;

}
