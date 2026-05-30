#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrix == NULL || matrixSize == 0 || matrixColSize[0] == 0) {
        return false;
    }
    
    int m = matrixSize;
    int n = matrixColSize[0];
    
    int low = 0;
    int high = (m * n) - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        int row = mid / n;
        int col = mid % n;
        
        int midValue = matrix[row][col];
        
        if (midValue == target) {
            return true;
        } else if (midValue < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return false;
}