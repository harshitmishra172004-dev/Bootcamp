#include <stdio.h>

#define MAX 50

void printMatrix(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// insert a row

void insertRow(int mat[MAX][MAX], int *rows, int cols, int targetRow, int newRowValues[]) {
    // Shift rows from bottom up to the insertion index
    for (int i = *rows; i > targetRow; i--) {
        for (int j = 0; j < cols; j++) {
            mat[i][j] = mat[i - 1][j];
        }
    }
    
    // Copy the new elements into the vacated row index
    for (int j = 0; j < cols; j++) {
        mat[targetRow][j] = newRowValues[j];
    }
    
    // Increment total row count
    (*rows)++;
}

// Function to shift elements right and insert a column
void insertColumn(int mat[MAX][MAX], int rows, int *cols, int targetCol, int newColValues[]) {
    // Shift columns for every single row from right to left
    for (int i = 0; i < rows; i++) {
        for (int j = *cols; j > targetCol; j--) {
            mat[i][j] = mat[i][j - 1];
        }
    }
    
    // Copy the new elements into the vacated column index
    for (int i = 0; i < rows; i++) {
        mat[i][targetCol] = newColValues[i];
    }
    
    // Increment total column count
    (*cols)++;
}

int main() {
    int rows = 3, cols = 3;
    int matrix[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    // 1. Insert a Row at index 1 (the 2nd row)
    int newRow[MAX] = {10, 20, 30};
    int rowPos = 1;
    insertRow(matrix, &rows, cols, rowPos, newRow);
    printf("Matrix after inserting row at index %d:\n", rowPos);
    printMatrix(matrix, rows, cols);

    // 2. Insert a Column at index 2 (the 3rd column)
    int newCol[MAX] = {99, 99, 99, 99}; // Needs length equal to current rows (4)
    int colPos = 2;
    insertColumn(matrix, rows, &cols, colPos, newCol);
    printf("Matrix after inserting column at index %d:\n", colPos);
    printMatrix(matrix, rows, cols);

    return 0;
}
