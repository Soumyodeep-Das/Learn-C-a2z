#include<stdio.h>
#include<stdlib.h>

int parent[20]={0};
int findParent(int);
int unionSets(int, int);
int main(){

int vertex;
int currentNode, nextNode, minCost, totalCost=0, vertexIndex=0, adjacentIndex, nextIndex;

printf("\nEnter no of vertices : ");
scanf("%d", &vertex);

int costMatrix[vertex][vertex];

printf("\nEnter cost matrix : \n");
for(currentNode=0; currentNode<vertex; currentNode++){
	for(nextNode=0; nextNode<vertex; nextNode++){
		scanf("%d", &costMatrix[currentNode][nextNode]);
		if(costMatrix[currentNode][nextNode]==0)
			costMatrix[currentNode][nextNode]=999;
	}
}

while(vertexIndex<vertex-1){
	minCost=999;
	for(currentNode=0; currentNode<vertex; currentNode++){
		for(nextNode=0; nextNode<vertex; nextNode++){
			if(costMatrix[currentNode][nextNode]<minCost && findParent(currentNode)!=findParent(nextNode))
				{
					minCost=costMatrix[currentNode][nextNode];
					adjacentIndex=currentNode;
					nextIndex=nextNode;					
				}
		}
	}
	if(unionSets(findParent(adjacentIndex), findParent(nextIndex))){
		printf("\nEdge%d : (%d, %d) -> cost = %d", vertexIndex++, adjacentIndex+1, nextIndex+1, minCost);
		totalCost+=minCost;
	}
	costMatrix[adjacentIndex][nextIndex]=costMatrix[nextIndex][adjacentIndex]=999;
}
printf("\n Total Cost = %d\n", totalCost);
return 0;
}
int findParent(int i){
	while(parent[i])
		i=parent[i];
	return i;
}
int unionSets(int i, int j){
	if(i!=j){
		parent[j]=i;
		return 1;
	}
	return 0;
}
