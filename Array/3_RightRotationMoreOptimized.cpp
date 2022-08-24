// Time complexity = O(n) 
// Space Complexity = O(1)

// 1 2 3 4 5
// 3 2 1 5 4 --> reverse first and second part
// 4 5 1 2 3 --> now reverse whole array
// k = 2
// 4 5 1 2 3

#include<iostream>
using namespace std;

void _reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void rightRotation(int arr[], int k, int n)
{
    _reverse(arr,0,n-k-1);
    _reverse(arr,n-k,n-1);
    _reverse(arr,0,n-1);
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

    rightRotation(arr,k,n);

    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}