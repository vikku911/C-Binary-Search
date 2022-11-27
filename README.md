# C-Binary-Search
Problem:
Given a sorted array arr[] of n elements, write a function to search a given element x in arr[] and return the index of x in the array.

Binary Search Approach: 

Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 

Binary Search Algorithm: The basic steps to perform Binary Search are:

Begin with the mid element of the whole array as a search key.

If the value of the search key is equal to the item then return an index of the search key.

Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.

Otherwise, narrow it to the upper half.

Repeatedly check from the second point until the value is found or the interval is empty.


Step-by-step Binary Search Algorithm: We basically ignore half of the elements just after one comparison.


Compare x with the middle element.

If x matches with the middle element, we return the mid index.

Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.

Else (x is smaller) recur for the left half.
