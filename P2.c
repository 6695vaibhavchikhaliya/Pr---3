#include<stdio.h>
main(){
	int number , count = 0;
	
	printf("Enter Of Any Number : ");
	scanf("%d",&number);
	
	while(number != 0){
		number /= 10;
		count++;
	}
	
	printf("Total Numner Of Digits : %d \n",count);
}
