#define N 5;
#include<stdio.h>
void spiral(int[][], int );

int count = 1; 
int x = 0;
int y = 0;

int main(void)
{
	
	return 0;
}

int spiral
{	
	int a[N][N];
	if(k==0)
		return 0;
	else if(k==1)
	{
		a[x][y]=count;
		return;
	}

	else
	{
		int i=x, j=y;
		for(;x<N; x++;)
		{	
			a[i][x]=count;
			count++;
		
		}
		
		for(x=x-1;x<(2*N); x++;)
		{
			a[][x]=count;
			count++;
		}

	for(i=0; i<N; i++)
	{
		t=(N-1);
		a[N-1][t]=p;
		p++;
		t--;
	}
	q=p;

	for(i=0; i<N; i++)
	{
		t=(N-1);
		a[t][N-1]=q;
		q++;
		t--;
		
	}

	
}
