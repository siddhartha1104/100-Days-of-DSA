#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[100];

    int n;
    cout<<"Enter the no of students: ";
    cin>>n;

    cout<<"Enter students marks: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"the marks are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}