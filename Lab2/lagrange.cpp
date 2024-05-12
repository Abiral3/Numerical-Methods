#include<stdio.h>
int main(){
	float x[100],y[100],a,s=1,t=1,k=0;
	int n,i,j,d=1;
	printf("Enter the number of terms of the table: ");
	scanf("%d",&n);
	printf("Enter the respective values of variables x and y: \n");
	for(i=0;i<n;i++){
		scanf("%f",&x[i]);
		scanf("%f",&y[i]);
	}
	printf("The table you entered is as follows: \n");
	for(i=0;i<n;i++){
		printf("%0.3f\t%0.3f",x[i],y[i]);
		printf("\n");
	}
	while(d==1){
		printf("\n\n Enter the value of the x to find the respective value of y: ");
		scanf("%f",&a);
		for(i=0;i<n;i++){
			s=1;
			t=1;
			for(j=0;j<n;j++){
				if(j!=i){
					s=s*(a-x[j]);
					t=t*(x[i]-x[j]);
				}
			}
			k=k+((s/t)*y[i]);
		}
		printf("The respective value of variable y is: %f",k);
		printf("\n\n Do you want to continue?\nPress 1 to continue and any other key to exit.");
		scanf("%d",&d);
	}
	return 0;
}
