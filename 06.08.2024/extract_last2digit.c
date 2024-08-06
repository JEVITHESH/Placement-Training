#include<stdio.h>
int main()
{
	int num,i,digit=0,x,y,z;
	printf("Integer: ");
	scanf("%d",&num);
	x=num/100;
	
	if(x==0)
	{
		printf("The number should be greater than %d\n",num);
	}
	else
	{
		y=(num/10)%10;
		z=num%10;
		printf("Last two digits: %d%d\n",y,z);
	}
	return 0;
}
