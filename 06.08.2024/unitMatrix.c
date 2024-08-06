#include<stdio.h>
int main()
{
	int r,c,l=0;
	printf("Enter the size of the matrix: ");
	scanf("%d",&r);
	
	printf("Enter the matrix elements:\n");
	int mat[r][r];
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<r;j++)
				{
					scanf("%d",&mat[i][j]);
				}
		}
	for(int i=0;i<r;i++)
		{
			for(int j=0;j<r;j++)
				{
					if((i==j && mat[i][j]!=1) || (i!=j && mat[i][j]!=0))
					{
						l=1;
					}
					
				}
		}
	
	(l==0)?printf("The matrix is a unit matrix.\n") : printf("The matrix is not a unit matrix.\n");
	return 0;
}
