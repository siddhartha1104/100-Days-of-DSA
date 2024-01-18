#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n, int key){

    int s = 0;
    int e = n-1;
    int mid;

    while(s<=e){       

        mid = s+(e-s)/2;

        if(arr[mid] == key){
            cout<<key<<" found at index: "<<mid;
            return mid;
        }
        else if(arr[mid] > key){
            e = mid - 1;

        }
        else{
            s = mid + 1;
        }

        

    }
    cout<<"Key not found";
    return -1;
}
 
int main(){

    int n,key;
    cout<<"Enter n: ";
    cin>>n;    

    int arr[n];
    cout<<"enter arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter Key: ";
    cin>>key;

    binarySearch(arr,n,key);

    return 0;
}