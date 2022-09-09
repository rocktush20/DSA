#include<iostream>
#include<algorithm>
using namespace std;


// Time Complexity = O(nlogn) 
// Space Complexity = O(1) (if my sorting algorithm take O(1) space)
bool anagram(string s1, string s2)
{
    if(s1.length() != s2.length())
    {
        return false; 
    }

    sort(s1.begin(),s1.end());
    sort(s2.begin(), s2.end());


    if(s1 == s2)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    string s1,s2;
    cin>>s1>>s2;

    if(anagram(s1,s2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}