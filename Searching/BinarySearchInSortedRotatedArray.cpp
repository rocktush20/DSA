#include<iostream>
using namespace std;

// 1 2 3 4 5
// 4 5 1 2 3


int search(int arr[], int n, int target)
{
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = low - (low-high)/2;

        if(arr[mid] == target)
        {
            return mid;
        }

        if(arr[low]<= arr[mid])
        {

            if(target>= arr[low] && target < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid+1;
            }
        }

        else
        {
            if(target> arr[mid] && target<= arr[high])
            {
                low = mid+1;
            }
            else
            {
                high= mid-1;
            }
        }
    }


    return -1;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    cout<<search(arr,n,target);

}