#include<bits/stdc++.h>
using namespace std;

int solve( string nums, int k )
{
    
        if(nums.length()<=k)
         cout<<"0"<<endl;
        
        if(k == 0)
        cout<<nums<<endl;

        stack<int>st;
        string ans = "";
        st.push(nums[0]);


        
      for(int i =1; i<nums.length();i++)
        {
          while(k > 0 && !st.empty() && nums[i] < st.top())
            {
      
                    --k;
                    st.pop();

            }
                 
            st.push(nums[i]);
            if(st.size()==1 && nums[i]=='0')
            st.pop();
        }
          
         while(k && !st.empty()) // the condtion of the stack is empty and free the all element
        {
            
            --k;
            st.pop();
        }
        
        while(!st.empty())
        {
            ans.push_back(st.top()); // pushing stack top to string
            st.pop(); // pop the top element
        }
        
        reverse(ans.begin(),ans.end()); // reverse the string 
        
     if(ans.length() == 0)

        cout<<0<<endl;
        
     cout<<ans;
}


int main()
{
 string nums;
 int k;
 cout<<"Enter the N string value \n"<<nums;
  cin>>nums;
 cout<<"The Kth Element\n"<<endl;
   cin>>k;
 solve(nums,k);
 
return 0;

}
