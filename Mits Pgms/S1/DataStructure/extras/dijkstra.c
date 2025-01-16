#include <limits.h> 
#include <stdbool.h> 
#include <stdio.h> 
#define NODES 9 

int findMin(int distance[], bool visited[]) 
{ 
    int min = INT_MAX, index; 
    for (int i = 0; i < NODES; i++) 
        if (!visited[i] && distance[i] <= min) 
            min = distance[i], index = i; 
    return index; 
} 

void printResult(int distance[]) 
{   
    printf("Node\t Distance from Source\n"); 
    for (int i = 0; i < NODES; i++) 
        printf("%d\t %d\n", i, distance[i]); 
} 

void dijkstra(int graph[NODES][NODES], int start) 
{ 
    int distance[NODES];  
    bool visited[NODES]; 

    for (int i = 0; i < NODES; i++) 
        distance[i] = INT_MAX, visited[i] = false; 

    distance[start] = 0; 

    for (int count = 0; count < NODES - 1; count++) { 
        int u = findMin(distance, visited); 
        visited[u] = true; 

        for (int v = 0; v < NODES; v++) 
            if (!visited[v] && graph[u][v] 
                && distance[u] != INT_MAX 
                && distance[u] + graph[u][v] < distance[v]) 
                distance[v] = distance[u] + graph[u][v]; 
    } 

    printResult(distance); 
} 

int main() 
{ 
    int graph[NODES][NODES] = { 
        { 0, 4, 0, 0, 0, 0, 0, 8, 0 }, 
        { 4, 0, 8, 0, 0, 0, 0, 11, 0 }, 
        { 0, 8, 0, 7, 0, 4, 0, 0, 2 }, 
        { 0, 0, 7, 0, 9, 14, 0, 0, 0 }, 
        { 0, 0, 0, 9, 0, 10, 0, 0, 0 }, 
        { 0, 0, 4, 14, 10, 0, 2, 0, 0 }, 
        { 0, 0, 0, 0, 0, 2, 0, 1, 6 }, 
        { 8, 11, 0, 0, 0, 0, 1, 0, 7 }, 
        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } 
    }; 

    dijkstra(graph, 0); 
    return 0; 
}
