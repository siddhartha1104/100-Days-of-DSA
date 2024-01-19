// First and last position of an element in a sorted array
#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 3, 4};

    int key;
    cout << "Enter key: ";
    cin >> key;

    cout << "First occ at index: " << firstOcc(arr, n, key) << endl;
    cout << "last occ at index: " << lastOcc(arr, n, key);

    return 0;
}