// regular method to solve 

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
// Third Approach
// Leet Code //
class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) 
                str+=tolower(s[i]);
        }
        string y=str;
        reverse(str.begin(),str.end());
        int i=0;
        int j=0;
        while(i<str.size() && j<y.size()){
            if(str[i]!=y[j]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
};
