#include<stdio.h>
#include<string.h>

int main (){
	
	char a[50];
	int i;
	
	printf("Enter Value : ");
	gets(a);
	
	printf("%s",strlwr(a));
	
	return 0;
}
