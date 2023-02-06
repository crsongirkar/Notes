#include<bits./stdc++.h>
using namespace std;
#define ll long long
int main()
{
int res=0;
int n;
		cout<<"Enter the number "<<endl;
		cin>>n;
		
		while(n!=0)
		{
			res=res*10;
			res=res+n%10;
			
			n=n/10;
			
		}
		cout<<"Reverse the number is : - "<<res<<endl;
		
return 0;
}

