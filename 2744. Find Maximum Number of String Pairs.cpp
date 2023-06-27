 // 2744. Find Maximum Number of String Pairs

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
      
      //  sort(words.begin(),words.end());
       
      
           int count = 0;  
         

       unordered_map<string,int>st;

       for(auto m :words)
       {
          
           string i = m;

           reverse(i.begin(),i.end());

           if(st[i] != 0 || st[i] > 0)
           {
               count++;
               st[i]--;
           }
           else
              st[m]++;
 
       }
       return  count;
        
    }
};


