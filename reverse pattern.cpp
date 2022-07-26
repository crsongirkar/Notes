#include<iostream>
using namespace std;
 
 
 
int sum_chinmay(int n ){
	if (n==0){
		return 0;
	}
	int last_digit=n%10;
	int ss =n/10;
	cout<< ss<< " " << last_digit <<"\n";
	return  sum_chinmay(ss)+last_digit;
}

int main(){
	cout<<sum_chinmay(548721);
}
