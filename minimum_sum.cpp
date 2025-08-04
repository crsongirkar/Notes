// #include<bits/stdc++.h>
// using namespace std;

// int sum(vector<int>&nums)
// {
//     int ans = 0;
//     int n = nums.size();

//     for(int i =0;i<n;i++){

//     ans += nums[i]; 
            
// }
//      cout<<ans<<endl;
//      return 0;
// }
// int main(){

//   vector<int> nums {958599555, 957263755, 42256375, 45254697};
//     sum(nums);
//    return 0;

// }
// // simple brute force approach to run test cases 

#include <bits/stdc++.h>
using namespace std;

double minimumSum(vector<int>& nums, int subSum, int X)
{
    int n = nums.size();
    int sumOfArr = accumulate(nums.begin(), nums.end(), 0); // Calculate the sum of all elements in the vector

    // Calculate (sumOfArr - subSum) + (subSum / X)
    double minimumSum = (sumOfArr - subSum) + (static_cast<double>(subSum) / X);

    return minimumSum;
}

int main() {
    vector<int> nums {958599555, 957263755, 42256375, 45254697};
    int subSum = 100000000; // Specify the subSum
    int X = 2; // Specify the value of X

    double result = minimumSum(nums, subSum, X);
    cout << "Minimum sum: " << result << endl;

    return 0;
}
