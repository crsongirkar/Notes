#include<bits/stdc++.h>
#include<math.h>
using namespace std;

vector<int>helper(vector<int>n)
{
   

int s = 0;
int e = n.size()-1;

while(s<=e)
{
    swap(n[s],n[e]);
    s++;
    e--;
}
    
   return n;
    
}

void print(vector<int>n)
{
   
    for(int i=0;i<n.size();i++)
    {
        cout<<n[i];
    }
    cout<<endl;
}
int main()
{
vector<int>n;
  
  n.push_back(1);
  n.push_back(2);
  n.push_back(3);
  n.push_back(4);
  n.push_back(5);
  n.push_back(6);
  
  
 
 vector<int> sum = helper(n);
print(sum);
//print(sum);
}


// coding ninjas 

#include <bits/stdc++.h>
using namespace std;


void reverse(int *a,int s,int e){
   
  while(s<=e){
      swap(a[s],a[e]);
      s++; e--;
  }
}
int main() {
    int n;
    cin>>n;
     int *a=new int[n];
    for(int i=0;i<n;i++)
    {
          cin>>a[i];
        
    }
  reverse(a,0,n-1);
       for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
       }
    return 0;
}


