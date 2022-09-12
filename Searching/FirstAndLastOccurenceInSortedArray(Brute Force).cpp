#include<iostream>
#include<vector>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target)
{
    int firstOcc = -1;
    int lastOcc = -1;

    for(int i = 0 ; i < nums.size(); i++)
    {
        if(nums[i] == target)
        {
            firstOcc = i;
            break;
        }
    }

    for(int i = nums.size() -1 ; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            lastOcc = i;
            break;
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
    vector<int> nums(n);

    for(int i = 0 ; i < n; i++)
    {
        cin>>nums[i];
    }

    int target;
    cin>>target;

    vector<int> ans = searchRange(nums,target);
    cout<<"{"<<ans[0]<<","<<ans[1]<<"}";
}