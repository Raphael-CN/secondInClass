#include <stdio.h>
#include <stdbool.h>

int getTotal(int arr[][3])
{
  int total = 0;

  for (int i = 0; i < 3; i++)
      for (int j = 0; j < 3; j++)
      {
        total += arr[i][j];
      }

  return total;
}

int getRowTotal(int arr[][3], int row)
{
  int rowTotal = 0;

  for(int i = 0; i < 3; i++)
      rowTotal += arr[row][i];

  return rowTotal;
}

int getColumnTotal(int arr[][3], int col)
{
  int columnTotal = 0;

  for(int i = 0; i < 3; i++)
      columnTotal += arr[i][col];

  return columnTotal;
}

int getForwardSlashTotal(int arr[][3])
{
  int slashTotal = 0;

  for (int i = 0; i < 3; i++)
      slashTotal += arr[i][i];

  return slashTotal;
}

int getBackwardSlashTotal(int arr[][3])
{
  int slashTotal = 0;

  for (int i = 2; i >= 0; i--)
      slashTotal += arr[i][i];

  return slashTotal;
}

bool check(int arr[][3])
{
  // Reference used since sums in all direction should be equal.
  int reference = getRowTotal(arr, 0);
  int elements = 9; // Number of elements in 2D array
  int elementTotal = 0;

  // Checks if square has all numbers from 1-x.
  // 1-9 if 3x3, 1-25 if 5x5, etc.
  for (int i = 0; i <= elements; i++) // 1 + 2 + 3...
      elementTotal += i;

  if (getTotal(arr) != elementTotal)
      return false;

  // Check sum of each row
  for(int i = 0; i < 3; i++)
      if (getRowTotal(arr, i) != reference)
      return false;

  // Check sum of each column
  for(int i = 0; i < 3; i++)
      if (getColumnTotal(arr, i) != reference)
      return false;

  // Checks sum of elements in direction
  if (getForwardSlashTotal(arr) != reference)
      return false;

  // Checks sum of elements in direction
  if (getBackwardSlashTotal(arr) != reference)
      return false;

  return true;
}

int main()
{
  int testOne[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
  bool testOneCheck = check(testOne);
  printf("Test One: %s\n", testOneCheck ? "true" : "false");
  return 0;
}
