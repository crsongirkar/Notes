#include<bits/stdc++.h>
#define count
#define ll long long
#define ld long double
#define mt
#define ret sort(mt.begin(),mt.end())
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
//#define int ll long long
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define pb push_back
#define chinmay 
using namespace std;

int lucky (  long long n)
{
     cin>>n;
 int temp =0;

    while(n!=0)
    {
        if(n%10==7 || n%10==4)
        
            temp++;
            n/=10;
    }
    if(temp == 7 || temp==4)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   
    
      return 0; 
}

int main()
{
    long long n;
    lucky(n);

    return 0;
}
