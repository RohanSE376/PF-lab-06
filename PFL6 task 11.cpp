#include<stdio.h>
#include<cmath>
int main(){
	

	double theta,L,H;
	printf("Enter value of height:\n");
	scanf("%lf",&H);

	printf("Enter value of Angle of elevation in rad.:\n");
	scanf("%lf",&theta);
	
	L=H/tan(theta);
	printf("The lenght of shadow will be : %lf",L);
	return 0;
}
