#include <stdio.h>
int main(){
	int a;
	char b;
	printf("What is your age? ");
	scanf("%d", &a);
	
	printf("Do you want to register? \n");
	printf("If yes write Y and N for no. \n");
	scanf(" %c", &b);
	
	if ( b == 'Y')
		if (a>=18)
			printf("You are now registered! \n");
		else if (a<18)
			printf("You cannot register. You need to be 18 or older. \n");
	if (b == 'N')
		printf("Come again next time");
}
