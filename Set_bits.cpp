


#include <iostream>

using namespace std;

    //Write your countBits function here

int countBits(int n)
{
    int count=0;
    while(n!=0)
    {
        if(n&1==1)
        {
            count+=1;
            
        }
        n=n>>1;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}
 
