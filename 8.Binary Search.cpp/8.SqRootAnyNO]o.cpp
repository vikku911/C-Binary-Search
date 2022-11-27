#include <iostream>
using namespace std;

int binarySearch(int key){
    
    long  int s = 0; 
    long  int e = key;
    
    long  int mid = s + (e-s)/2;
    int ans = -1;
    
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

double moreprecision(int key , int precision, int tempSol){
    
    double factor =1;
    double ans = tempSol;
    for (int i =0; i<precision; i++){
        
        factor = factor /10;
       // cout <<factor<<endl;
        
        for(double j = ans; j*j< key; j= j+factor ){
           // cout<<j<<endl;
            ans =j;
        }
    }
    return ans;
}

int main() {
    
    int key;
    cout <<" Enter the key "<<endl;
    cin>>key;
    
    int tempSol = binarySearch (key);
    cout << "Answer "<< moreprecision(key, 3, tempSol);
   
    return 0;
}
/*

Enter the key 
5
Answer 2.236

*/