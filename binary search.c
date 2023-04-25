#include <stdio.h>

int binary_search(int arr[], int n, int key) {
  int left = 0, right = n - 1, mid;
  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 6, 8};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 6;
  int index = binary_search(arr, n, key);
  if (index == -1) {
    printf("Element not found\n");
  } else {
    printf("Element found at index %d\n", index);
  }
  return 0;
}
