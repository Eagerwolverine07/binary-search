# binary-search
Binary Search
Binary search is an algorithm that allows you to search for an element in a sorted array in O(log n) time, where n is the size of the array. The basic idea behind binary search is to repeatedly divide the array in half and search the half that could contain the element you're looking for.

How it works
Begin with an already sorted array of elements and the element to be searched.

Set the lower and upper bounds of the array.

Set the middle index of the array.

Compare the middle element of the array with the element to be searched.

If the middle element is equal to the element to be searched, return the index of the middle element.

If the middle element is greater than the element to be searched, then the element is in the left half of the array. Update the upper bound to be one less than the middle index.

If the middle element is less than the element to be searched, then the element is in the right half of the array. Update the lower bound to be one more than the middle index.

Repeat steps 3-7 until either the element is found or the lower and upper bounds cross each other.

In this code, binary_search takes an integer array arr, its size n, and an integer key to search for. We initialize two variables left and right to the first and last indices of the array, respectively. We then enter a while loop that runs until left is greater than right. In each iteration of the loop, we calculate the middle index mid as the average of left and right. We check if the middle element is equal to the key, and return its index if it is. If the middle element is less than the key, we update left to be mid + 1. If the middle element is greater than the key, we update right to be mid - 1. If the loop completes and the key is not found, we return -1.
