#include<stdio.h>
int main(){
int* a,b;
b=5;
a=&b;
printf("address of a= %p\n" ,a);
printf("value of a= %d" ,*a);
}
