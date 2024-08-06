#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,z1,z2;
	float AB,BC,CA;
	printf("x y coordinates of vertex A: ");
	scanf("%f %f",&x1,&y1);
	printf("x y coordinates of vertex B: ");
	scanf("%f %f",&x2,&y2);
	printf("x y coordinates of vertex C:");
	scanf("%f %f",&z1,&z2);
	AB =(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	BC = (y2-y1)*(y2-y1)+(z2-z1)*(z2-z1);
	CA = (z2-z1)*(z2-z1)+(x2-x1)*(x2-x1);
	printf("Length AB: %.2f\n Length: %.2f\n Length AC: %.2f\n",AB,BC,CA);
	return 0;
}
