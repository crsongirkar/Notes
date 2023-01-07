// silding window problem 
// anagram string to check the string is string is anagram or not

  //Eg. 
// Input: s = "cbaebabacd", p = "abc"
// Output: [0,6]
// Explanation:
// The substring with start index = 0 is "cba", which is an anagram of "abc".
// The substring with start index = 6 is "bac", which is an anagram of "abc".


class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int start = s.size();
        int end = p.size();
        
        if(start < end) return {};
        
        vector<int>p_freq(26,0);
        vector<int>window(26,0);
        
        
        // for checking a window
         
        for(int i=0;i<end;i++)
        {
            
            p_freq[p[i]-'a']++;
            window[s[i]-'a']++;
            
        }  
        
        
        vector<int> ans;
        
        if(p_freq == window )  ans.push_back(0);
        
        for(int i = end; i<start; i++ )
        {
            window[s[i-end]- 'a']--;
            window[s[i] - 'a']++;
            
            if(p_freq == window) ans.push_back(i-end+1);
            
            
        }
        return ans;
        
        
        
    }
};
