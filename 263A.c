#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5][5], i, j, row, col, moves;

    // Read input
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    // Calculate minimum number of moves
    moves = abs(row - 2) + abs(col - 2);

    // Print output
    printf("%d\n", moves);

    return 0;
}
 