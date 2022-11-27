#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int ans =-1;
    int mid = s + (e-s)/2;
    
    for ( ; s<=e ; ){
        
        if (arr[mid] == key ){
            ans = mid;
            e = mid-1;
        }
        
        if(arr[mid] > key ){
            e = mid -1;
        }
        
        if (arr[mid] < key ){
            s = mid +1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int ans =-1;
    int mid = s + (e-s)/2;
    
    for ( ; s<=e ; ){
        
        if (arr[mid] == key ){
            ans = mid;
            s = mid+1;
        }
        
        if(arr[mid] > key ){
            e = mid -1;
        }
        
        if (arr[mid] < key ){
            s = mid +1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return ans;
}
int main() {
    
    int arr[8] = {2,4,6,6,6,8,9,10};
   
    int first = firstOcc(arr, 8,6);
    int last = lastOcc(arr, 8,6);
    cout <<"First occurance of 6 is at "<<first<<endl<<"Last occurance of 6 is at "<<last;
   
    return 0;
}
/*

First occurance of 6 is at 2
Last occurance of 6 is at 4

*/