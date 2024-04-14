#include<stdio.h>
int main(){
int a=3, b=6;
int* c;
int* d;
int temp;
c=&a;
d=&b;
printf("before swap : %d, %d\n" ,a,b);
temp=*c;
*c = *d;
*d=temp;
printf("after swap : %d, %d\n" ,a,b);
}
