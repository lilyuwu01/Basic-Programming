#include <stdio.h>
int main(){
	int age;
	char ans;
	
	printf("What is your age?: ");
	scanf("%d", &age);
	
		if(age <18)
		printf("You are not qualified to vote yet.");	
		if (age >=18){
			printf("What is your gender? Write F for Female and M for Male: ");
			scanf(" %c", &ans);
			if(ans=='F')
				printf("You are now registered, Ma'am");
			else if(ans=='M')
				printf("You are now registered, Sir."); 
	}
		
		}
