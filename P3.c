#include<stdio.h>
main(){
	int number,first_digit,last_digit,sum;
	
	printf("Enter Of Any Number : ");
	scanf("%d",&number);
	
	first_digit = number;
	while(first_digit >= 10){
		first_digit /= 10;
	}
	
	last_digit = number % 10;
	
	sum = first_digit + last_digit;
	printf("The Sum Of The First & Last Digit : %d \n",sum);
}
