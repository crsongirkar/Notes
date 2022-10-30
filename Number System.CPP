// 1 Digit to Bit

#include<bits/stdc++.h>
using namespace std;

//  void bitman(int n)
// {
    
//   }
int main()
{
  int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        int bit = n & 1;
        {
            ans= bit*(pow(10,i))+ans;
            
         n = n>>1;
         i++;
        }
    }
    cout<<"Bit is = "<<ans<<endl;
}

// Bit to Digit

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int ans=0;
    int i=0;
    
    while(n!=0)
    {
        
        
        int digits = n % 10;
        
        if(n==1)
        {
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
        
        
    }
    cout<<"Digit is : ="<<ans;
}
