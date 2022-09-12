#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int> &arr,int target)
{

    int n = arr.size();

    int firstOcc = -1;
    int lastOcc = -1;

    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = low - (low - high)/2;

        if(arr[mid] == target)
        {
            firstOcc = mid;
            high = mid-1;
        }

        else if(arr[mid] > target)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    low = 0;
    high = n-1;

    while(low<=high)
    {
        int mid = low - (low - high)/2;

        if(arr[mid] == target)
        {
            lastOcc = mid;
            low = mid+1;
        }

        else if(arr[mid] > target)
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    vector<int> ans;
    ans.push_back(firstOcc);
    ans.push_back(lastOcc);

    return ans;

}

int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int target;
    cin>>target;

    vector<int> ans = searchRange(arr,target);
    cout<<"{"<<ans[0]<<","<<ans[1]<<"}";

    
}
