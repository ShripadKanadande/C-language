#include<stdio.h>
int main()
{
	int num,cube;
	
	printf("Enter a number");
	scanf("%d",&num);
	
	cube = num*num*num;
	
	printf("cube of %d is %d",num,cube);
	
	return 0;

}
