// check a normal anagram string is it is anagram or not 

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a = "tea";
	string b = "ate";
  
  sort(a.begin(),a.end());
 	sort(b.begin(),b.end());
	 
	 if(a == b)
	 {
		 cout<<" string is true";
		 
	 }
	 else{
		 cout<<"string is bad";
	 }
	return 0;
} 
// it is a anagram string 

// **Group of anagram string**

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      
        vector<vector<string>>ans;
      
        unordered_map<string ,vector<string>>mp;

        for(auto x:strs) // 
          
        {
            string temp = x;

            sort(x.begin(),x.end());

            mp[x].push_back(temp);


        }
        for(auto x:mp)
        {
            vector<string>temp = x.second;  
            ans.push_back(temp);
        }
        return ans;
        
    }
};
