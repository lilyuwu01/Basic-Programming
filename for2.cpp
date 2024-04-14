#include <stdio.h>
int main(){
	int a,b,c;
	for(a=1;a<=10;a++){
		for(b=a;b<=10-1;b++)
			printf(" ");                                                   
			for(c=1;c<=2*a-1;c++)
				printf("*");       
				   
		printf("\n");
	}
	
	
}

