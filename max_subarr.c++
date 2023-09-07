#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums){
    int curr = 0;
    int temp = INT_MIN;
     
    for(auto c :nums){
      curr = max(c,curr+c),
        temp=max(temp , curr);
     }
     cout<<temp<<endl;

}
int main()
{
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    solve(nums);
    return 0;
}
