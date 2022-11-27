#include <iostream>
using namespace std;

int binarySearch(int key){
    
    long  int s = 0; 
    long  int e = key;
    
    long  int mid = s + (e-s)/2;
    int ans = -1;               // jab element present nahi rehta hai to jo bhi (-1)return karne ke liye for loop ka ans int me store kate hai.
    
    for(;s<=e;){
        long  int sq = mid*mid;
        if (sq == key){
            return mid;
        }
       
        if ( sq < key){
           // ans = mid;
            s = mid +1;
        }
        else{
             e = mid -1;
        }
        mid = s + (e-s)/2;
        
    }
    return ans ;
    
}

int main() {
    
    int key;
    cout <<" Enter the key "<<endl;
    cin>>key;
    
    int valid = binarySearch (key);
    //cout<<valid;
    
    if ( valid* valid == key){
        cout << "The square root of "<<key<< " is "<<valid<<endl;
    }
    else {
        cout << "Enter valid perfect sqaure key."<<endl;
    }
    
    return 0;
}
/*

Enter the key 
10
Enter valid perfect sqaure key.

Enter the key 
625
The square root of 625 is 25

*/