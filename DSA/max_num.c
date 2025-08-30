//Program to find the maximum element in a Matrix
#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100]; // Adjust size if needed
    int max;

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Assume the first element is the maximum
    max = matrix[0][0];

    // Traverse the matrix to find the maximum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    // Output the result
    printf("The maximum element in the matrix is: %d\n", max);

    return 0;
}
