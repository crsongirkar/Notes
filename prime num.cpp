#include<iostream>
using namespace std;

int main()
{
  int a;
  cin>>a;
  
  for(int i=0;i<a;i++)
  {
    //cout<<i;
    if(i%2==0)
  {
    cout<<i<<" number is prime "<<endl;
  }
  else{
    cout<<i<<" number is odd "<<endl;
  }
  
  }
  
}
//****************************************************************
// output:-
// 5
// 0 number is prime 
// 1 number is odd 
// 2 number is prime 
// 3 number is odd 
// 4 number is prime 
