#include <iostream>
using namespace std;

bool isPossible(int arr[] , int n , int m, int mid){
     int stuCount = 1;
     int pageSum = 0;
     int i = 0;
     for( i = 0 ; i<n ; i++ ){
         
         if ( pageSum + arr[i] <= mid  ){
             pageSum = pageSum + arr[i];
             //cout << pageSum<<endl;
         }
         else {
             stuCount++;
             if (stuCount > m || arr[i] > mid){
                 return false ;
             }
             pageSum = arr[i];
            // cout << endl;
         }
     }
     return true;
}


int bookAllo(int arr[] , int n , int m){
    
    int s = 0;
    int sum =0;
    for (int i = 0; i<n ; i++){
        sum = sum + arr[i];
       // cout << sum<<endl;
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    
    for (;s<=e;){
        
        if (isPossible(arr,n,m,mid)){
            ans = mid;
            //cout << ans<<endl;
            e = mid -1;
        }
        else {
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}

int main() {
    
    int arr[4] = {10,20,30,40};
    
    int n = 4;
    int m = 2;
   
     cout << "Minimum number of pages = "<< bookAllo(arr,n,m) << endl;
    
    return 0;
}
/*

Minimum number of pages = 60

*/