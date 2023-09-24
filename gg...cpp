#include<stdio.h>
int main()
{
	int number;
	printf("enter an integer number\n");
	scanf("%d",&number);
	
	if (number<=10)
	printf("accont is not spam\n\n");
	else
	printf("account is spam\n");
	return(0);
}
