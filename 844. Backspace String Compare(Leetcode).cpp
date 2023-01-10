844. Backspace String Compare

Given two strings s and t, 
return true if they are equal when both are typed into empty text editors. 
'#' means a backspace character.
Note that after backspacing an empty text, the text will continue empty.

  Eg. 
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".


**************************************************************************************************************************************************************************
class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<int>s1,s2;
     string str1,str2;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#' && !s1.empty())
                s1.pop();
            else if (s[i] !='#'){
                
                s1.push(s[i]);
            }
        }
          for(int i=0;i<t.size();i++)
        {
            if(t[i]=='#' && !s2.empty())
                s2.pop();
            else if (t[i] !='#'){
                
                s2.push(t[i]);
            }
        }
        while(!s1.empty())
        {
            str1.push_back(s1.top());
            s1.pop();
        }
          while(!s2.empty())
        {
            str2.push_back(s2.top());
            s2.pop();
        }
        return str1==str2;
    }
};
