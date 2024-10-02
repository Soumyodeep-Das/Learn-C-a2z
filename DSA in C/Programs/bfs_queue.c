#include<stdio.h>
int adj[20][20], visited[20] ,n,i,j,q[10];
void BFS(int start)
{
	int queue[n],front = -1 ,rear = -1,k,p;

		queue[++rear] = start;
		front++;
		visited[start] = 1;
		
		while(front<=rear)
		{
			start = queue[front++];
			
			for(p=0;p<=n;p++)
			{
				if(adj[start][p] == 1 && visited[p] == 0)
				{
					queue[++rear] = p;
					visited[p] = 1;
					printf("%d",p);
				}
			}
		
		}
}
int main()
{
	int start;
	printf("Enter The Number Of Vertices");
	scanf("%d",&n);
	for (i=0;i<=n;i++) {
		q[i]=0;
		visited[i]=0;
	}
	printf("Enter The Graph in Matrix Form ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	printf("Enter The Vertex to start");
	scanf("%d",&start);
	
	printf("%d",start);
	visited[start]=1;
	BFS(start);
	return 0;
}