// leetcode hard problem 

#include<bits/stdc++.h>
using namespace std;

int sums(int n) {
        
        int count =0;
        int sum;
        if ( n == 1 ){
           return 1;
        }
        for(int i =1; 2*n > i * ( i-1 ); i++){

            int nume = n - (i * (i - 1)/2);
             
             if(nume %i == 0)
             {
                 count++;
             }

        }
        
      cout<<count<<endl;
      return 0;
    }
int main()
{
  int n ;
  cin>>n;
  sums(n);
  return 0;
  
}
