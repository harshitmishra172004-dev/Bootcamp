#include <stdio.h>

int main() {
    int rows, cols, sum = 0;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    //  matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    //  the sum of boundary elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of boundary elements = %d\n", sum);

    return 0;
}
