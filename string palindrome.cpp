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
    string s = {"Chinmay"};
    
    cout<<pali(s)<<endl;
    
    return 0;
    
}
