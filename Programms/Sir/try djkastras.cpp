#include<stdio.h>
#include<conio.h>
#define INFINITY 9999
#define LIMIT	 8

using namespace std;

void play(int matrix[LIMIT][LIMIT], int n, int start);

int main(){
	int matrix[LIMIT][LIMIT], i, j, n, u;
	printf("\nEnter the no. of vertices:: ");
	scanf("%d", &n);
	printf("\nEnter the adjacency matrix::\n");
	for(i=0;i < n;i++)
		for(j=0;j < n;j++)
			scanf("%d", &matrix[i][j]);
	printf("\nEnter the starting  node:: ");
	scanf("%d", &u);
	play(matrix,n,u);
	;
}

void play(int matrix[][LIMIT], int n, int start)
{
	int cost[LIMIT][LIMIT], distance[LIMIT], extra_array	[LIMIT];
	int visited[LIMIT], count, mindistance, nextnode, i,j;
	for(i=0;i < n;i++)
		for(j=0;j < n;j++)
			if(matrix[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=matrix[i][j];
	
	for(i=0;i< n;i++)
	{
		distance[i]=cost[start][i];
		extra_array[i]=start;
		visited[i]=0;
	}
	distance[start]=0;
	visited[start]=1;
	count=1;
	while(count < n-1){
		mindistance=INFINITY;
		for(i=0;i < n;i++)
			if(distance[i] < mindistance&&!visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}
		visited[nextnode]=1;
		for(i=0;i < n;i++)
			if(!visited[i])
				if(mindistance+cost[nextnode][i] < distance[i])
				{
					distance[i]=mindistance+cost[nextnode][i];
					extra_array[i]=nextnode;
				}
			count++;
	}

	for(i=0;i < n;i++)
		if(i!=start)
		{
			printf("\nDistance of %d = %d", i, distance[i]);
			printf("\nPath = %d", i);
			j=i;
		
		}
}

/*
		  5
		a----->b---->\
		|\	  |     | 
	   2|  \1 |	2   | 2
		|	 \ |    |
		d----->c---/
		   4
		   
		   a b c d
		 a 0 5 1 0
		 b 0 0 3 0
		 c 0 2 0 0 
		 d 2 0 4 0
		  
		  */ 
