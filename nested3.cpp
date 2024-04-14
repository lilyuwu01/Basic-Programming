#include <stdio.h>
int main(){
	int a, b, c;
	
	printf("Please enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	printf("Please enter the third number: ");
	scanf("%d", &c);
	
		if(a>=b && a>=c)
			if(b>=c)
				printf("The number %d is the second largest number.", b);
			else 
				printf("The number %d is the second largest number.", c);
		else if(b>=c)
			if(a>=c)
				printf("The number %d is the second largest number.", a);
			else
				printf("The number %d is the second largest number.", c);
		else 
			if (a>=b)
				printf("The number %d is the second largest number.", a);
			else
				printf("The number %d is the second largest number.", b);
	}
