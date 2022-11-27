
//Using pivot element.

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

int binarySearch(int arr[], int s, int e ,int key){
    
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;
    int ans = -1;
    for( ; start<=end ; ){
        if(arr[mid] == key){
            return mid;
        }
        if (arr[mid] >key){
            end = mid -1;
        }
        if (arr[mid] < key){
            start = mid +1;
        }
        
        mid = start+ (end-start)/2;
        
    }
    return ans;
}

int search(int arr[], int size, int pivot, int key){
    
    int s = 0;
    int e = size -1;
    
    if (key > arr[pivot] && key > arr[e]){
        int first_half =  binarySearch(arr,s,(pivot-1),key);
        //cout << first_half<<endl;
        return first_half;
    }
    if (key >= arr[pivot] && key <= arr[e] ){
       int second_half = binarySearch(arr,pivot,e,key);
       //cout << second_half<< endl;
       return second_half;
    }
    return -1;
    
}

int main(){
    int arr[10] = {6,7,8,9,10,11,2,3,4,5};
    
    int pivot = pivotElement(arr, 10);
    //cout <<pivot<<endl;
     
    /*int binary = binarySearch(arr, 0, 4 ,9);
    cout <<binary<<endl;
    */
     int key ;
     cout<<"Enter the key"<<endl;
     cin>>key;
     int element = search (arr,10,pivot,key);
     
    /*int first = search (arr,10,pivot,6);
    int last = search (arr,10,pivot,5);
    int fhElement = search (arr,10,pivot,9);
    int shElement = search (arr,10,pivot,3);
    int notpresent = search (arr,10,pivot,66);
    cout <<"Index of element 6 is  "<< first <<
    endl<<"Index of element 5 is  "<<last<<endl;
    cout <<"Index of element 9 is  "<< fhElement <<
    endl<<"Index of element 3 is  "<<shElement<<endl;
    cout <<"Index of element 66 is  "<< notpresent;
    */
    
    if(arr[element] == key ){
        cout<<"Key is present at "<< search (arr,10,pivot,key)<<"th index." <<endl;
    }
    else{
        cout<<"Key is not present.";
    }
}

/*

Enter the key
4
Key is present at 8th index.   

Enter the key
75
Key is not present.


line 84 onward output

Index of element 6 is  0
Index of element 5 is  9
Index of element 9 is  3
Index of element 3 is  7
Index of element 66 is  -1

*/