#include<stdio.h>
int main(){
	int x[10],y[10],p[10];
	int k,f,n,i,j=1,f1=1,f2=0;
	printf("ENter the number of observations: ");
	scanf("%d",&n);
	printf("Enter the different values of x: ");
	for(i=1;i<=n;i++)
		scanf("%d",&x[i]);
		
	printf("The corresponding values of y are: ");
	for(i=1;i<=n;i++)
		scanf("%d", &y[i]);
	f=y[1];
	printf("Enter values of 'k' in f(k) you want to evaluate: ");
	scanf("%d", &k);
	do{
		for(i=1;i<=n-1;i++){
			p[i]=((y[i+1]-y[i])/(x[i+j]-x[i]));
			y[i]=p[i];
		}
		f1=1;
		for(i=1;i<=j;i++){
			f1*=(k-x[i]);
		}
		f2+=(y[1]*f1);
		n--;
		j++;
	}while(n!=1);
	f+=f2;
	printf("f(%d) = %d",k,f);
	return 0;
}
