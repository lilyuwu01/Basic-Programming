#include<stdio.h>
int main(){
int a;
do{
printf("Hello World\n");
printf("Print again? [1] for Yes and [2] for No\n");
scanf("%d", &a);
}while(a==1);
}
