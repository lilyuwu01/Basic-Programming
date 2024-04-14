#include<stdio.h>
int main(){
int a;
int b=6, c=4, d;
printf("Enter \n[1] for multiplication\n[2] for division\n");
scanf("%d" ,&a);
switch(a){
	case 1 : d=b*c;
					printf("%d" ,d);
	break;
	case 2 : d=b/c;
					printf("%d" ,d);
	break;
	default : printf("thank you");
}
}
