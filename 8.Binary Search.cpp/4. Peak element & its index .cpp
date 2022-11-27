#include <iostream>
using namespace std;

int peakElement(int arr[], int size){
    int s = 0;
    int e = size-1;
   
    int mid = s + (e-s)/2;
    
    for ( ; s<e ; ){
        
        if (arr[mid] <arr[mid+1]){
            s = mid +1;
        }
        
        if (arr[mid] >arr[mid+1]){
           e= mid ;
        }
        
        mid = s + (e-s)/2;
    }
    cout<<"Peak element is present at "<<mid<<"th index and the element is ";
    return arr[mid];
}

int main() {
    
    int arr[10] = {2,4,5,7,8,9,20, 7,5,3};        // Ek part increasing aur ek deacreasing me rehta hai.
   
    int peak = peakElement(arr, 10);             // Pivot me dono part increasing order me rehta hai. 
   
    cout<<peak;
   
    return 0;
}

/*

Peak element is present at 6th index and the element is 20

*/