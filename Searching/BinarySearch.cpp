#include<iostream>
using namespace std;

// Time Complexity = O(n)
// Space Complexity = O(1)
// Limitation = Works only on sorted array
int BinarySearch(int arr[], int key , int n)
{

    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = low - (low-high)/2;

        if(arr[mid] == key)
        {
            return mid;
        }

        else if(arr[mid] > key)
        {
            high = mid-1;
        }

        else
        {
            low = mid+1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i =0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;


    cout<<"Index of key element = "<<BinarySearch(arr,key,n);

}