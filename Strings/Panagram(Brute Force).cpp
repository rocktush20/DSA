#include<iostream>
using namespace std;


// Time Complexity = O(N) (26N = O(N)) 
// Space complexity = O(1)
bool Panagram(string s)
{

    for(char i = 'a' ; i <= 'z'; i++)
    {
        bool find = false;

        for(int j = 0 ; j < s.length(); j++)
        {
            if(s[j] == i)
            {
                find = true;
                break;
            }
        }

        if(!find)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s;
    cin>>s;

    if(Panagram(s))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}