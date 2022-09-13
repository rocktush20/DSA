#include<iostream>
using namespace std;

void spiralTraversal(int arr[4][5] , int m , int n)
{
    int top = 0;
    int bottom = m-1;
    int left = 0;
    int right = n-1;

    while(top<=bottom && left<=right)
    {
        for(int i = left; i <=right; i++)
        {
            cout<<arr[top][i]<<" ";
        }

        top++;


        for(int i = top ; i <= bottom && left<=right; i++)
        {
            cout<<arr[i][right]<<" ";
        }

        right--;

        for(int i = right; i>= left && top<=bottom; i--)
        {
            cout<<arr[bottom][i]<<" ";
        }

        bottom--;

        for(int i = bottom; i >= top && left<=right; i--)
        {
            cout<<arr[i][left]<<" ";
        }

        left++;
    }
}

int main()
{
    int arr[4][5] = {{1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20}};

    int arr2[1][4] = {{1,2,3,4}};


    spiralTraversal(arr,4,5);

}