#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    vector<int>m;
    m.emplace_back(2);
    m.emplace_back(3);
    m.emplace_back(4);
    m.emplace_back(5);
    m.emplace_back(6);
     m.push_back(10);
         m.pop_back();



 for (auto it = m.begin(); it != m.end(); ++it)

        cout << ' ' << *it<<endl;
        

  return 0;

}

// emplace_back;

/*
                 
The C++ function std::vector::emplace_back() inserts new element at the end of vector. Reallocation happens if there is need of more space.

This method increases container size by one.
          
*/
