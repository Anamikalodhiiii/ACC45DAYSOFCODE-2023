#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter 3 num  ");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y && x>z)
	printf("Max no = %d\n",x);
	else if(y>z)
	printf("Max no = %d\n",y);
	else
	printf("Max no = %d\n",z);
	return 0;
}
