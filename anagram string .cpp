#include<bits/stdc++.h>
using namespace std;
int main()
{
string ch;
cout<<"print the anagram string"<<endl;
cin>>ch;

sort(ch.begin(),ch.end());

cout<<"anagram is the "<<ch<<endl;
   
    return 0;
}


