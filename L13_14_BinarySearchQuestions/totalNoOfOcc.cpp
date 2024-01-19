// **find Total number of occurance of an element using binary search
#include<bits/stdc++.h>
using namespace std;

// using binary search
int firstOcc(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while (s <= e)
    {

        if (key == arr[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    int ans = 0;
    while (s <= e)
    {
        if (key == arr[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int totalOcc(int *arr, int n, int key){

    int total = (lastOcc(arr,n,key)-firstOcc(arr,n,key))+1;

}


// Normal prociser **Without using binary search**
// int totalOcc(int *arr, int n, int key){

//     int ans = 0;

//     for(int i=0; i<n; i++){
//         if(key == arr[i]){
//             ans+=1;
//         }
       
//     }
//     return ans;
// }



int main(){   

    // int n;
    // cout<<"Enter N: ";
    // cin>>n;
    int n = 6;
    int arr[n] = {1,2,3,3,3,5};
    // int arr[n];
    // cout<<"Enter array values: ";
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // int key;
    // cout<<"enter key: ";
    // cin>>key;
    int key = 3;

    // **without using binary search**
    // cout<<"total occ: "<<totalOcc(arr,n,key);

    cout<<"first occ: "<<firstOcc(arr,n,key)<<endl;
    cout<<"last occ: "<<lastOcc(arr,n,key)<<endl<<endl;
    cout<<"total occ: "<<totalOcc(arr,n,key);
    return 0;
}