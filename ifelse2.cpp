#include <stdio.h>
int main (){
	char let;
	printf("Please enter an Alphabet Letter ");
	scanf("%c", &let);
	
	if(let=='a'||let=='A'||let=='e'||let=='E'||let=='i'||let=='I'||let=='o'||let=='O'||let=='u'||let=='U')
		printf("%c is a Vowel!", let);
	else 
		printf("%c is a Consonant!", let);
}
