/*
Tag:- Easy 

You are given an integer array banned and two integers n and maxSum. You are choosing some number of integers following the below rules:

The chosen integers have to be in the range [1, n].
Each integer can be chosen at most once.
The chosen integers should not be in the array banned.
The sum of the chosen integers should not exceed maxSum.
Return the maximum number of integers you can choose following the mentioned rules.


to find the index value they represent the MaxSum

IMP part of this question is the find the banned element and the 

and remove the banned. to and check  the sum of remeaing element which is 
equal to the Max Sum the confition are full filled  return the count

easy problem T.C O(n) 
S.C is O(1)

*/


class Solution {
 public:
    int maxCount(vector<int>& banned, int n, int maxSum) 
    {
        unordered_set<int> st(begin(banned),end(banned));
        int res=0,sum=0;
        for(int i=1;i<=n;i++)
        {
            if(st.find(i)==st.end())
            {
                if(sum+i<=maxSum)
                {
                    res++;
                    sum+=i;
                }
                else
                {
                    break;
                }
            }
        }    
        return res;
    }
}; 
