//2. Write a program to calculate integration using the Trapezoidal rule.
#include<stdio.h>
#include<math.h>
float f(float x){
	return ((sin(x/2)+2*cos(x)));
}
int main(){
	int n;
	float x0,x1,res;
	printf("Enter the lower limit(x0): ");
	scanf("%f",&x0);
	printf("Enter the upper limit(x1): ");
	scanf("%f", &x1);
	res=((x1-x0)/2)*(f(x0)+f(x1));
	printf("The integration is: %f",res);
	return 0;
}
