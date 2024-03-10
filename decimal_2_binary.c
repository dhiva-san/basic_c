#include<stdio.h>
#include<math.h>
int main(void){
	
	int decimal_num,no_of_bits,i; 
	printf("Enter the decimal number and no. of binary bits :");
	scanf("%d %d",decimal_num,no_of_bits);
	for(i=no_of_bits-1;i>=0;i--){
		if(decimal_num>=pow(2,i)){
			printf("1");
			decimal_num-=pow(2,i);
		}
		else{
			printf("0");
		}
	}
	return 0;
}
