// using BST  formula to find  to  highest and lowest index and also sort the array using bst;
// formula of bst is   
// mid = [fist index - last index ] / 2 + first index ; 

// right side greater than  element and left side small element 


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        
        int ans=arr[0];
        
        while(low<=high)
        
        {
            
            int mid= low+ (high -  low )/2;
            
            if(arr[mid]>=ans)
            {
                low=mid+1;
            }
            else{
                ans= arr[mid];
                high=mid;
            }
        }
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends
