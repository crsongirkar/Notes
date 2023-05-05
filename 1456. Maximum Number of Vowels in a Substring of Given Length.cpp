// 1456. Maximum Number of Vowels in a Substring of Given Length


/*
Constraints:

1 <= s.length <= 10^5 O(n log n) or O(n) 
s consists of lowercase English letters.
1 <= k <= s.length

*/

#define lop for(int i=0;i<k;i++)
class Solution {
public:
    int maxVowels(string s, int k) {
    
    unordered_set<char> mp{ 
        'a', 'e', 'i', 'o', 'u'
        };
    
    int count =0;
    
  lop{
      count+=mp.count(s[i]);


  }
  int ans = count;
 
  for(int i=k;i<s.length();i++)
  {
      count+=mp.count(s[i])-mp.count(s[i-k]);
      ans = max(ans,count);
  }

 return ans;
        
    }
};
