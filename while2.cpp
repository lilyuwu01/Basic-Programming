#include<stdio.h>
int main(){
int a=1;
int c=1;
int b;
while(a==1){
	printf("%d\n" ,c);
	c++;
	printf("Press [1] for print again [2] for exit");
	scanf("%d" ,&b);
	if(b==1)
		continue;
	else
		break;
}
}
