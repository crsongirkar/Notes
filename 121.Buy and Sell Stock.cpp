#leetcode

class chinmay{
public:
  int max_profit(vector<int>prices)
 {
    int n= prices.size();
    
    int min_val = INT_MAX;  // denoting the max store the max element 
    int ans=0;
    
    for(int i=0;i<n;i++)
     {  
        min_val=min(prices[i],min_val);
        ans=max(ans,prices[i]-min_val);
         
     }
    return ans;
    
  }


};


#vscode

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int stock(vector<int>&arr)
 {

    int max_profit = 0;
    int n = arr.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j] > arr[i])
            {
                   max_profit=max(arr[j]-arr[i],max_profit);
            }
        }
    }
           return max_profit;
}
int main()
{
    vector<int> arr{7,1,5,3,6,4};
    int max_profit = stock(arr);
    cout<<"maximum profit are : - "<<max_profit<<endl;

}
