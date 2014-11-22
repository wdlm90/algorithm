#include<stdio.h>
void PrintMatrixInCircle(int **mat, int columns, int rows, int start)
{
	int endx = columns - start - 1;
	int endy = rows - start - 1;
	//print from left to right
	for(int i=start; i<=endx;i++)
	{
		printf("%d ",mat[start][i]);
	}
	//print from top to bottom
	if(endy>start)
	{
		for(int i=start+1;i<=endy;i++)
		{
			printf("%d ",mat[i][endx]);
		}
	}
	//print from right to left
	if(endy>start&&endx>start)
	{
		for(int i=endy-1;i>=start;i--)
		printf("%d ",mat[endy][i]);
	}
	//print from bottom to top
	if(endy-start>=2&&endx>start)
	{
		for(int i=endy-1;i>=start+1;i--)
		printf("%d ",mat[i][start]);
	}
}
void PrintMatrixClock(int **mat, int columns, int rows)
{
	if(mat==NULL||columns==0||rows==0)
	return;
	int start=0;
	while(2*start<columns&&2*start<rows)
	{
		PrintMatrixInCircle(mat, columns, rows,start);
		start++;
	}
}

int main()
{
	int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int **p = new int*[4];
	for(int i=0;i<4;i++)
	{
		p[i]=mat[i];
	}
	PrintMatrixClock(p,4,4);
}
