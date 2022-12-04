#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Shashikant";
    string s2 = "thank you";
    
   if(s1[9]==s2[0])
    {
        cout<<"True";
    }
    else{
        cout<<"false";
    }
   // cout<<"worng code";
    
}

// easy approach to apply this code simply check the n-1 index value and i th index value  this logic for check corret or not 
// this code you simpliy write a test cases or anything else you write.


// accepted approach


class Solution {
public:

     bool isCircularSentence(string sentence) {
        int n=sentence.length();
        if(sentence[0]!=sentence.back())return 0;
        for (int i=0;i<n;++i)if(sentence[i]==' '){
            if(sentence[i-1]!=sentence[i+1])return 0;
        }
        return 1;
    }
};
