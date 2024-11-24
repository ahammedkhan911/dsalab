#include <stdio.h>

int main() {
    int N, E;

    printf("Enter the number of nodes: ");
    scanf("%d", &N);

    int Graph[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                Graph[i][j] = 0;
            else
                Graph[i][j] = -1;
        }
    }

    printf("Enter the number of edges: ");
    scanf("%d", &E);

    for (int i = 0; i < E; i++) {
        int x, y, weight;
        printf("Enter edge %d (format: x y weight): ", i + 1);
        scanf("%d %d %d", &x, &y, &weight);

        if (x < 0 || x >= N || y < 0 || y >= N) {
            printf("Invalid nodes. Please try again.\n");
            i--;
        } else {
            Graph[x][y] = weight;
            /*Graph[x][y] = 1;
            Graph[y][x] = 1;*/
        }
    }

    printf("\nAdjacency matrix representation of the graph:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", Graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}
