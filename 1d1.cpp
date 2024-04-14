#include<stdio.h>
int main(){
int a,b;
int arr[3];
printf("Enter 3 numbers: \n");
for(a=0;a<3;a++){
		scanf("%d", &arr[a]);
	}
printf("all the entered values are: \n");
	for(a=0;a<3;a++){
		printf("%d ", arr[a]);
	}
}
