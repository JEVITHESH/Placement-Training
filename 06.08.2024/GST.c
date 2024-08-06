#include<stdio.h>
int main()
{
	int net,cos,GST;
	printf("Enter net price and original cost : ");
	scanf("%d %d",&net,&cos);
	GST = ((net-cos)*100)/cos;
	printf("%d%%\n",GST);
	return 0;
	
}
