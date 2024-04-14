#include<stdio.h>
int main(){
int a;
int b=5;
do{
b--;
printf("%d\n" ,b);
printf("Print again? [1] for Yes and [2] for No\n");
scanf("%d", &a);
}while(a==1);
}
