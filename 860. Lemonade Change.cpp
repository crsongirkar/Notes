// link https://leetcode.com/problems/lemonade-change/description/?envType=study-plan-v2&id=programming-skills

// This is a simple question in greedy and basic math 
// hint:-
// remember you take N rs and you purchase something 
// and shopkeepr gives you a change in range 5 10 20 
// you purchase a 10 rs chocolate jump line 21
// this very logical quetion and tricky question but easy 

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {

        int ten =0;
        int five =0;
        for(auto bill : bills){

        if(bill == 5)
        {

            five++; // ans true in that condition 
        }
        else if(bill == 10) //  your bill is 10 rs and pay a 30 rs 
                            // 20 rerturn and the ans false.
        {
           // if(five == 0)
            ten++; // for add 
            five--; 
        }
        else if( ten > 0)
        {
            ten--;
            five --;
        }
         else{
            five -=3;
         }
         if(five < 0){
          return false; // base case 
         }
    }
     return true;
  }
};
