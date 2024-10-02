#include<stdio.h>
#include<stdlib.h>


int main(){

int i, j;
int vertices, edges;
int currentNode, nextNode, adjacentNodeIndex, nextNodeIndex, vertexCount=0;
int minCost=0, totalCost=0;

printf("\n Enter number of vertices : ");
scanf("%d", &vertices);

int costMatrix[vertices][vertices];
int visited[vertices];
printf("\n Enter weight of edges : ");
for(i=0; i<vertices; i++){
	for(j=0; j<vertices; j++){
		//printf("\n Weight(%d, %d) = ", i+1, j+1);
		scanf("%d", &costMatrix[i][j]);
		if(costMatrix[i][j]==0)
			costMatrix[i][j]=999;
	}
	visited[i]=0;
}

visited[0]=1;
while(vertexCount<vertices-1){
	minCost=999;
	for(currentNode=0; currentNode<vertices; currentNode++){
		if (visited[currentNode]) {
                for (nextNode = 0; nextNode < vertices; nextNode++) {
                    if (!visited[nextNode] && costMatrix[currentNode][nextNode] < minCost) {
                        minCost = costMatrix[currentNode][nextNode];
                        adjacentNodeIndex = currentNode;
                        nextNodeIndex = nextNode;
                    }
                }
            }
	}
	visited[nextNodeIndex] = 1;
        printf("\n Edge (%d, %d) with cost %d", adjacentNodeIndex + 1, nextNodeIndex + 1, minCost);
        totalCost += minCost;
        vertexCount++;
	costMatrix[adjacentNodeIndex][nextNodeIndex]=costMatrix[nextNodeIndex][adjacentNodeIndex]=999;
}
printf("\n Total Cost = %d", totalCost);
return 0;
}
