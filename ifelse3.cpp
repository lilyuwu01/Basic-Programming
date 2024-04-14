 #include <stdio.h>
int main(){
	int a, b, c;
	printf("Hello, what is your gender? \n F for Female and M for Male: ");
	scanf("%c", &a);
	
	if(a=='F')
		printf("Okay, thank you Ma'am", a);
	else
		printf("Okay thank you Sir.", a);
	}
