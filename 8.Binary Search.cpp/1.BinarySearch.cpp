
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    
    int start = 0;
    int end = size-1;
    //int mid = (start + end)/2;
    int mid = start + ((end-start)/2);
    
    for(start = 0; start<=end; ){
        
        if(key == arr[mid]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid +1;
        }
        else //(key < arr[mid])
        {
            end = mid - 1; 
        }
        
        mid = (start + end)/2;
    }
    return -1;
   
}

int main(){
    int odd[5] = {2,4,5,7,8};
    int even[6] = { 2,4,5,8,19,21};
   
   int indexodd = binarySearch(even,6,16); 
   int indexeven = binarySearch(odd,5,8);
   
   cout<<"For odd array key  16  is present at  "<<indexodd<<" index"<<endl;
   cout<<"For even array key  8  is present at  "<<indexeven<<" index"<<endl;
    
}
/*

For odd array key  16  is present at  -1 index
For even array key  8  is present at  4 index

*/