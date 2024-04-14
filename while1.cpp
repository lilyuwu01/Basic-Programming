#include<stdio.h>
int main(){
int a=1;
int b;
while(a==1){
	printf("hello world\n");
	printf("Press [1] for print again [2] for exit");
	scanf("%d" ,&b);
	if(b==1)
		continue;
	else
		break;
}
}
