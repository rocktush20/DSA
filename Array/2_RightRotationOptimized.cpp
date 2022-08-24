// Time complexity = O(n) 
// Space Complexity = O(n)

// 1 2 3 4 5
// k = 2
// 4 5 1 2 3

#include<iostream>
using namespace std;

void rightRotation(int arr[], int n, int k)
{
    int temp[n];
    int index = 0;
    for(int i = n-k; i < n ; i++)
    {
        temp[index++] = arr[i]; 
    }

    for(int i = 0 ; i < n-k; i++)
    {
        temp[index++] = arr[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i < n ; i++)
    {
        int x;
        cin>>x;
        arr[i] = x;
    }

    int k;
    cin>>k;

    k = k % n;

    rightRotation(arr,n,k);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}