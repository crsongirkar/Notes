#include<bits/stdc++.h>
using namespace std;

string pali(string s)
{
    string temp = s;
    reverse(temp.begin(),temp.end());
    
    if(s==temp)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}
int main()
{
    string s = {"A man, a plan, a canal: Panama"};
    
    cout<<pali(s)<<endl;
    
    return 0;
    
}
// another approach using two pointer
class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        if(s == " ")
        {
            return true;
        }

        int start =0;
        int end = n-1;

        int count = 0; 
        for(int i=0;i<n;i++)
        {
            if(s[start] == s[end])
            {
                 start++;
                 end--;
                 if(s[start]!=s[end])
                 {
                     return false;
                 }
                 else{
                     return true;
                 }
            }
            else{
                return false;
            }
        }
        return 0;
    }
};
