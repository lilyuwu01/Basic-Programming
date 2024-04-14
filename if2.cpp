#include <stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers you want to compare: ");
	scanf("%d %d", &a,&b);
	
	if(a==b)
		printf("%d and %d is equal.", a,b);
	if(a<b)
		printf("%d is greater than %d", b, a);
	if(a>b)
		printf("%d is greater than %d", a,b);
		
}
