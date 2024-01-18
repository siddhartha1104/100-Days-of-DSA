#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n, int key){

    for(int i=0;i<n; i++){
        if(arr[i] == key){
            cout<<key<<" Found at index "<<i;
            return i;
        }
        
    }
    cout<<"key not found";
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

    linearSearch(arr,n,key);

    return 0;
}