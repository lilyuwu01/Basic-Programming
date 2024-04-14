#include <stdio.h>
int main(){
	int a,b;
	printf("Write two numbers: ");
	scanf("%d %d", &a, &b);
	
		if(a>b)
			printf("%d is the biggest number", a);
		else
			printf("%d is the biggest number", b);
}
