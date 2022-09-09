#include<iostream>
using namespace std;


// Time Complexity = O(n^2) Space complexity = O(1)
bool anagramApproach1(string s1, string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }

    for(int i = 0 ; i < s1.length(); i++)
    {
        char curr = s1[i];
        for(int j = 0 ; j < s2.length(); j++)
        {
            if(s2[j] == curr)
            {
                s2[j] = '#';
                break;
            }
        }
    }


    for(int i =0  ; i < s2.length(); i++)
    {
        if(s2[i]!= '#')
        {
            return false;
        }
    }

    return true;
}

// Time Complexity = O(N^2) Space Complexity = O(N)
bool anagramApproach2(string s1, string s2)
{
    if(s1.length()!= s2.length())
    {
        return false;
    }


    bool arr[s1.length()] = {0};

    
    for(int i = 0 ; i < s1.length(); i++)
    {
        char curr = s1[i];
        for(int j = 0 ; j < s2.length(); j++)
        {
            if(s2[j] == curr && arr[j] == false)
            {
                arr[j] = true;
                break;
            }
        }
    }


    for(int i = 0 ;i < s2.length(); i++)
    {
        if(arr[i] == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(anagramApproach2(s1,s2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}