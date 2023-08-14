
// leetcode medium question search matix but it is not hard or medium to solve ti is easy  

// TC = log(O(m*n))

// brute force
#include<bits/stdc++.h>
using namespace std;

int searchMatrix(int k)
{
  
     int m = 0;
     cin>>m;
     int n = 0;
     cin>>n;
    
     int arr[n][m] = {{1,3,5,7},
                     {10,11,16,20},
                     {23,30,34,60}};;
                 
     cout<<"print arr matrix"<<" "<<endl;
     
     for(int i=0;i<m;i++)
     {
        for(int j=0;j<n;j++)
        {
        //    cout<<arr[i][j]<<" ";
            
             if(arr[i][j] == k)
            {
                cout<<"True"<<" ";
             // return true;
               
            }
            else{
               // return false;
                cout<<"False"<<" ";
            }
            
        }

   cout<<endl;
     }

     return 0;
}

int main()
{  

     int k = 5;
    // cout<<searchMatrix(k);
    searchMatrix(k);
     return 0;

}


// binary search optimal 
// TC = O(m*n)

#include<bits/stdc++.h>
using namespace std;

int solve( int target)
{

     int m = 0;
     cin>> m;
     int n = 0;
     cin>> n;
    
     int arr[n][m] = {{1,3,5,7},
                     {10,11,16,20},
                     {23,30,34,60}};;
     
     int low = 0;
     int high = (n * m)-1;

     while(low <= high)
     {
          int mid =(low + (high - low)/2) ;

           if(arr[mid/m][mid%m] == target){

              cout<<"true"<<endl;
              return 0;
          }

          if(arr[mid/m][mid%m] < target){
               low= mid+1;
          }
         
          else{
               high = mid-1;
          }
     }
     cout<<"Flase"<<endl;
return 0;

}
int main()
{
     int target = 10;
     solve(target);
}

