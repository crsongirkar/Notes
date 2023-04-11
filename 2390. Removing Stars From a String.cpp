/*
 I solved this question using Two Pointer Approach and Stack Approach 
*/

// Problem link :- https://leetcode.com/problems/removing-stars-from-a-string/

//two poniter approach 

// T.C O(n) 
// S.C O(1)

class Solution {
public:
    string removeStars(string s) {

        int  start = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='*')
            {
                start--;

            }
            else{
                s[start]=s[i];
            start++;
        }
    }
        return s.substr(0,start);
    }
};

// using stack 

// T.C O(n) 
// S.C O(n)

class Solution{
    public:
     string removeStars(string s) {
  
   stack<char>st;
   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='*')
       {
           st.pop();
       }
       else{
           st.push(s[i]);
       }
   }
   // 
   string ans = "";
   while(!st.empty())
   {
       ans.push_back(st.top());
       st.pop();

   }
   reverse(ans.begin(),ans.end());

   return ans;
 }
};
