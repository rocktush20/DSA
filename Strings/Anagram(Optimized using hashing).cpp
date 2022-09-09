#include<iostream>
#include<unordered_map>
using namespace std;


// Time Complexity = O(N) Space Complexity = O(N)
bool anagram(string s1, string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }

    unordered_map<char,int> ms1;

    for(int i = 0 ; i < s1.length(); i++)
    {
        ms1[s1[i]]++;
    }

    for(int i = 0; i < s2.length(); i++)
    {
        ms1[s2[i]]--;
    }

    for(auto i : ms1)
    {
        if(i.second != 0)
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

    if(anagram(s1,s2))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}