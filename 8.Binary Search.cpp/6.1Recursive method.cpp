#include <iostream>
using namespace std;

int peakElement(int arr[], int size,int key){
    int s = 0;
    int e = size-1;
    int ans = -1;
    
    int mid = s + (e-s)/2;
    if (arr [s] == key){
        return s;
    }
    if (arr[s] > key){
        s = mid +1 ;
        for ( ; s<e ; ){
        
            if (arr[mid] == key ){
             ans = mid ;
            }
        
            if (arr[mid] > key){
                e = mid -1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        return ans ;
    }
    
    else(arr[e] > key);
    {
        s = mid -1 ;
        for ( ; s<e ; ){
        
            if (arr[mid] == key ){
                ans = mid ;
            }
        
            if (arr[mid] > key){
                e = mid -1;
            }
            else{
                s = mid +1;
            }
        
            mid = s + (e-s)/2;
        }
        return ans;
    }
}

int main() {
    
    int arr[11] = {15,16,17,1,2,3,5,7,8,9,11};
    int key;
    cout<<"Enter the no that you are looking for"<<endl;
    cin>>key;
    int peak = peakElement(arr, 11,key);
   
    if( peak == key){
        cout<<"Element is present";
    }
    else {
        cout << "Element is not present";
    }
   
    return 0;
}


/*

Enter the no that you are looking for
13
Element is not present


*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////

// Search an element in sorted and rotated
// array using single pass of Binary Search
#include <bits/stdc++.h>
using namespace std;

// Returns index of key in arr[l..h] if
// key is present, otherwise returns -1
int search(int arr[], int l, int h, int key)
{
	if (l > h)
		return -1;

	int mid = (l + h) / 2;
	if (arr[mid] == key)
		return mid;

	/* If arr[l...mid] is sorted */
	if (arr[l] <= arr[mid]) {
		/* As this subarray is sorted, we can quickly
		check if key lies in half or other half */
		if (key >= arr[l] && key <= arr[mid])
			return search(arr, l, mid - 1, key);
		/*If key not lies in first half subarray,
		Divide other half into two subarrays,
		such that we can quickly check if key lies
		in other half */
		return search(arr, mid + 1, h, key);
	}

	/* If arr[l..mid] first subarray is not sorted, then
	arr[mid... h] must be sorted subarray */
	if (key >= arr[mid] && key <= arr[h])
		return search(arr, mid + 1, h, key);

	return search(arr, l, mid - 1, key);
}

// Driver program
int main()
{
	int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 3;
	int i = search(arr, 0, n - 1, key);

	if (i != -1)
		cout << "Index: " << i << endl;
	else
		cout << "Key not found";
}



