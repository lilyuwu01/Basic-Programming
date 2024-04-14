#include<stdio.h>
int main(){
int a,b;
int arr[2][3];
printf("Enter 6 numbers: \n");
for(a=0;a<2;a++){
	for(b=0;b<3;b++){
		scanf("%d", &arr[a][b]);
	}
}
printf("all the entered values on first row are: \n");
	for(b=0;b<3;b++){
		printf("%d", arr[0][b]);
	}
}
