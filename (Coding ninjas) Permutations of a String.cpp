// question link :- https://www.codingninjas.com/codestudio/problems/permutations-of-a-string_985254?source=youtube&campaign=Recursion_Fraz&utm_source=youtube&utm_medium=affiliate&utm_campaign=Recursion_Fraz&leftPanelTab=0

#include<bits/stdc++.h>
void premu(int n,string &str,vector<string>&ans)
{

    if(n>=str.size())
{
    ans.push_back(str);
}

for(int i=n;i<str.size();i++)
{
    swap(str[i],str[n]);
    premu(n+1,str,ans);
    swap(str[i],str[n]);
}

} 

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string>ans;
    premu(0,str, ans);
    sort(ans.begin(),ans.end());
    return ans;
}
