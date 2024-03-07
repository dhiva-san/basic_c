#include<stdio.h>
int power(int x){
	int i;
	long int j=1;
	for(i=1;i<=x;j*=10,i++);
	return j;
}
int main(void){
long int a,k;
printf("Enter the number:");
scanf("%ld",&a);
int j=0;
double i=0,n=1;
while(i*i!=a && n>=1/(double)power(9))
{	
	k=power(j);
	n=1/(double)k;
	for(;i*i<=a;i+=n);
		i-=n;
		j+=1;
		}
printf("\nThe square root is %lf\n",i);
return 0;
}
