#include<bits/stdc++.h>
using namespace std;

int peakElem(int *arr, int n){

    int s = 0;
    int e = n-1;
    int mid = s +(e-s)/2;

    while(s<e){    

        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }
        else{
           e = mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main(){


    int n = 6;
    int arr[n] = {1,2,5,2,1};
  

    cout<<"Peak Element is: "<<peakElem(arr,n);
    return 0;
}