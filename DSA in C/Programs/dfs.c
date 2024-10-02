#include <stdio.h>

#define MAX_VERTICES 20

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];
int queue[MAX_VERTICES];

void breadthFirstSearch(int start, int numVertices)
{
    int front = -1, rear = -1;

    queue[++rear] = start;
    front++;
    visited[start] = 1;

    while (front <= rear)
    {
        start = queue[front++];

        for (int i = 0; i < numVertices; i++)
        {
            if (adjacencyMatrix[start][i] == 1 && visited[i] == 0)
            {
                queue[++rear] = i;
                visited[i] = 1;
                printf("%d ", i);
            }
        }
    }
}

int main()
{
    int numVertices, start;

    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);

    // Initialize arrays
    for (int i = 0; i < numVertices; i++)
    {
        queue[i] = 0;
        visited[i] = 0;
    }

    printf("Enter the graph in matrix form:\n");
    for (int i = 0; i < numVertices; i++)
    {
        for (int j = 0; j < numVertices; j++)
        {
            scanf("%d", &adjacencyMatrix[i][j]);
        }
    }

    printf("Enter the vertex to start: ");
    scanf("%d", &start);

    printf("%d ", start);
    visited[start] = 1;
    breadthFirstSearch(start, numVertices);

    return 0;
}
