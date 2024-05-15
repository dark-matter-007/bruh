#include <stdio.h>

int main() {
  int rows, cols;

  // Get array dimensions from user
  printf("Enter number of rows: ");
  scanf("%d", &rows);
  printf("Enter number of columns: ");
  scanf("%d", &cols);

  // Declare the 2D array
  int arr[rows][cols];

  printf("Enter elements:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // Print the array
  printf("Array elements:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  // Find sum of all elements (modify for other operations)
  int sum = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum += arr[i][j];
    }
  }
  printf("Sum of all elements: %d\n", sum);

  return 0;
}
