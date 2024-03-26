//Romberg
#include <stdio.h>
#include<math.h>
using namespace std;

float f(float x){
    return 1/x;
}

int main(){
    float a,b,h,result;
    printf("Enter Lower Limit: ");
    scanf("%f", &a);
    printf("Enter Upper Limit: ");
    scanf("%f", &b);
    
    int x,y;
    printf("Enter Value of i in Rij: ");
    scanf("%d", &x);
    printf("Enter Value of j in Rij: ");
    scanf("%d", &y);
    
    float A[x][x],sum,x1;
    
    for(int i=0;i<=x;i++){
        h=(b-a)/pow(2,i);
        sum=0;
       if(i==0){
           A[i][0]=h/2*(f(a)+f(b));
       }else{
           int k=1;
           while(k<=pow(2,i-1)){
               sum=sum+f(a+(2*k-1)*h);
               k++;
           }
           A[i][0]=(A[i-1][0]/2 )+ (h*sum);
       }
       printf("%f\n", A[i][0]);
    }
    printf("\n");
    for(int i=0;i<=x;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                continue;
            }else{
                A[i][j]=(pow(4,j)*A[i][j-1]-A[i-1][j-1])/(pow(4,j)-1);
                printf("%f\n", A[i][j]);
            }
        }
    }
    
    printf("Output: %f\n", A[x][y]);
    
    

    return 0;
}
