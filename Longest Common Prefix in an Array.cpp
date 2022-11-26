// GFG code 
// tags string , array

#include<bits/stdcpp.h>
using namespace std;

//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        if(N==1) return arr[0];
        
        string s1=arr[0];
        string s2=arr[1];
        
        string prefix="";
        
        for (int i=0;i<min(s1.length(),s2.length());i++)
        {
            if(s1[i]==s2[i]) prefix+=s1[i];
            
           else break;
           
        }
        if(prefix.length()==0)
        return "-1";
        
        for(int i=2;i<N;i++)
        {
            int prefixLength = arr[i].length();
            int stringLength = arr[i].length();
            
            int minLength = min(prefixLength, stringLength);
            
            for(int j=minLength; j>0; j--) 
            {
                if(prefix.substr(0, j) == arr[i].substr(0, j)) {
                    prefix = arr[i].substr(0, j);
                    break;
                }
                else prefix = prefix.substr(0, j-1);
            }
        }
        
        return prefix.length() != 0 ? prefix : "-1";
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}



// } Driver Code Ends
