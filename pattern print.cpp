#include<iostream>
using namespace std;

void pattern_c (int n){
    if (n==1){
        cout<<"1"<<"\n";
        return ;
    }
	 

	for(int i=1 ; i<=n ; i++){
	 	
		cout<<i<<" ";
	} 
	cout<< "\n";
	pattern_c(n-1);
	
	for (int i= 1; i<=n; i++){
		cout<<i<< " ";
	}
	cout << "\n";
}
 int main (){
 	pattern_c (3);
 }
