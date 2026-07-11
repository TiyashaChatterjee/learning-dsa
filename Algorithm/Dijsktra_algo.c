#include <stdio.h>
#include <limits.h>

#define MAX_VERTICES 100

// Function to find the vertex with the minimum distance value
int minDistance(int dist[], int sptSet[], int vertices) {
    int min = INT_MAX;
    int minIndex = -1;

    for (int v = 0; v < vertices; v++) {
        if (!sptSet[v] && dist[v] < min) {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}

// Function to print the distance array
void printSolution(int dist[], int vertices) {
    printf("\nVertex\tDistance from Source\n");

    for (int i = 0; i < vertices; i++) {
        if (dist[i] == INT_MAX)
            printf("%d\tINF\n", i);
        else
            printf("%d\t%d\n", i, dist[i]);
    }
}

// Function to implement Dijkstra's algorithm
void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int src, int vertices) {
    int dist[MAX_VERTICES];
    int sptSet[MAX_VERTICES];

    // Initialize distances and shortest path tree set
    for (int i = 0; i < vertices; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < vertices - 1; count++) {

        int u = minDistance(dist, sptSet, vertices);

        // If no reachable vertex remains
        if (u == -1)
            break;

        sptSet[u] = 1;

        for (int v = 0; v < vertices; v++) {
            if (!sptSet[v] &&
                graph[u][v] != 0 &&
                dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist, vertices);
}

int main() {
    int vertices;
    int graph[MAX_VERTICES][MAX_VERTICES];
    int src;

    printf("Input the number of vertices: ");
    scanf("%d", &vertices);

    if (vertices <= 0 || vertices > MAX_VERTICES) {
        printf("Invalid number of vertices.\n");
        return 1;
    }

    printf("\nEnter the adjacency matrix:\n");
    printf("(Enter 0 if there is no edge)\n");

    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the source vertex (0 to %d): ", vertices - 1);
    scanf("%d", &src);

    if (src < 0 || src >= vertices) {
        printf("Invalid source vertex.\n");
        return 1;
    }

    dijkstra(graph, src, vertices);

    return 0;
}