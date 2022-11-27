#include <iostream>
using namespace std;


int pivotElement(int arr[], int size ){
    
    int s = 0;
    int e = size -1;
    
    int mid = s+ (e-s)/2;
    
    for( ; s<e ; ){
       
        if (arr[mid] >= arr[0]){
             s = mid +1;
             
        }
        else{
           e = mid;
        }
        mid = s+ (e-s)/2;
    }
    return mid; //return s/e;
}

int main(){
    int arr[10] = {6,7,8,9,10,11,2,3,4,5};              //Dono part increasing order me hai.
    
    int pivot = pivotElement(arr, 10);                // peak me ek part increasing aur ek deacreasing me rehta hai.
    cout<<pivot;
}
/*

6

*/


/*


#include <iostream>
using namespace std;

int pivot(int arr[], int size){
    int s = 0;
    int e = size-1;
   
    int mid = s + (e-s)/2;
    
    for ( ; s<e ; ){
        
        if (arr[mid] <arr[mid+1]){
            e= mid ;
        }
        
        if (arr[mid] >arr[mid+1]){
           s = mid +1;
        }
        
        mid = s + (e-s)/2;
    }
    cout<<"Pivot element is present at "<<s<<"th index and the element is ";
    return arr[s];
}
int main() 
{
    
    int arr[5] = {4,5,1,2,3};                 
     int peak = pivot(arr, 5);          
   
    cout<<peak;
   
    return 0;

}
// peak me ek part increasing aur ek deacreasing me rehta hai. ....Wrong...

*/