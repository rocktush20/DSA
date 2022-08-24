// Time complexity = O(k*n) 
// Space Complexity = O(1)

#include<iostream>
using namespace std;

void rightRotation(int arr[], int n)
{
    int temp = arr[n-1];

    for(int i = n-1; i >= 1; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

void kTimesRotate(int arr[], int n, int k)
{
    for(int i= 0 ; i < k ; i++)
    {
        rightRotation(arr,n);
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

    kTimesRotate(arr,n,k);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
