#include<iostream>
using namespace std;
int fibb(int n)
{
    if(n==0 or n==1)
    return n;
    
    return fibb(n-1)+fibb(n-2); // formula 
}
int main()
{
    int n;
    cin>>n;
    cout<<fibb(n);
}
//intput:-5
//output:- 5

