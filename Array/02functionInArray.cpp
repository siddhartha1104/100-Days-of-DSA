#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){

    cout<<"The Values are: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int n;
    cout<<"enter the no: ";
    cin>>n;

    int arr[n];
    cout<<"enter arr value: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    printArray(arr,n);

    return 0;
}