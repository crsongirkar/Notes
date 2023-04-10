/* problem link :- https://cses.fi/problemset/task/1755/ */ 

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
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define pb push_back
#define chinmay 
using namespace std;

int occ[26]; // 26 charc string 

void pailn()
{   string s;
    cin>>s; // 

    rep(0,S(s)-1){
		occ[ s[i] - 'A' ]++;
	}


    int odds = 0;
	int oddi = -1;
	rep(0,25){
		if(occ[i]%2) // element div
        {
			odds++;
			oddi = i; 
		}
	}

    if(odds > 1)
    { 
        cout<<"NO SOLUTION";  // for no soln
        return ;
    }

   	// left part
	rep(0,25){
		if(occ[i]%2 == 0){
			int half = occ[i]/2;
			occ[i] -= half;
			while(half--){
				cout << (char)('A' + i);
			}
		}	
	}

	// mid part
	if(oddi!=-1){
		while( occ[oddi]-- ){
			cout << (char)('A'+oddi);
		}
	}

	// right part
	for(int i=25; i>=0; i--){
		while(occ[i] > 0){
			occ[i]--;
			cout << (char)( 'A' + i );
		}
	}

	cout << endl;

}
#undef int

int main()
{
    int pali = 1;
    // cin>>pali;
    while(pali--)
    {
        pailn();
    }
}
// Note:- 
/*
   This question solve using string hashing algorithm it is not just finding a palindrome string and return 
   you swap the postion of this string and do it.
   
  dived a digit in 3 part left , right and mid part then easy to solve this question 
*/
