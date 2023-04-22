 // link :-  https://leetcode.com/problems/repeated-substring-pattern/description/?envType=study-plan-v2&id=programming-skills

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
            //int n =s.size();
      string st = s+s; // concatenation method join two string 
      int i=1;
      // while loop are occur a TLE because a its TC is O(N log N)
      // and cosntraints is 10^4 means O(n^2) thats way we use a for loop 
    for(i;i<s.size();i++)
    // while(i<s.size())

      {
           string str=st.substr(i,s.size());
          if(str == s)
          {
              return true;
          }
          
      }
      return false;
             


    }
};
