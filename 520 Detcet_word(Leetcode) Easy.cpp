Que :- 
<link rel="problem" href= https://leetcode.com/problems/detect-capital/ >
Tag :- Easy , string  

Explanation :- 

 Find out the Word String To all Capital Letter and pass true or false ;
 you only traverse the loop to i=1 i< word; 
 and check the wether all string are UPPER case or not;
 use a build in function (isupper()) and (islower());

 Eg :- 1) Input: word = "USA"
          Output: true
       
       2) Input: word = "FlaG"
          Output: false     
   
  
//**************************************************************************CODE************************************************************************************ 

class Solution {
public:
bool detectCapitalUse(string word) {
    
    int n = word.size(); 
    
    for(int i = 1; i <n; i++){
        if(isupper(word[1]) != isupper(word[i]) || 
           islower(word[0]) && isupper(word[i])) return false;
    }        
    return true;
}
        
    
};
