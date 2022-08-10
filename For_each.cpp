// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;


    // Write C++ code here
    void print(int a)
    {
        cout<< a*2<<" "<<endl;
    }
    int main()
    {
        int arr[5]={1,2,3,4,5};
        
        for_each(arr,arr+5,print);
        
            cout<<endl;
    } 
// Apart from the generic looping techniques, such as “for, while and do-while”,
//   C++ in its language also allows us to use another functionality which solves the same purpose termed “for-each” loops. 
//   This loop accepts a function which executes over each of the container elements. 
//   This loop is defined in the header file “algorithm”: 
//#include<algorithm>, and hence has to be included for successful operation of this loop.

// It is versatile, i.e.  Can work with any container.
// It reduces chances of errors one can commit using generic for loop
// It makes code more readable
// for_each loops improve overall performance of code

//
//for_each(start_iter,last_iter,func) 
//start_iter : The beginning position 
// from where function operations has to be executed.
// last_iter : The ending position 
// till where function has to be executed.
// fnc/obj_fnc : The 3rd argument is a function or 
// an object function which operation would be applied to each element. 
  
