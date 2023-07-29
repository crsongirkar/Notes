
// asked in all company IMP question 
#include<bits/stdc++.h>
using namespace std;

class LRU{

    public:
    map<int,int>mp;
    map<int,list<int>::iterator>add;
    list<int>li;
    int cap;
    int siz;
      
       LRU(int capacity) {
        cap = capacity;
        siz = 0;
    }
    int get(int key)
    {
          
          if(mp.find(key) == mp.end()) return -1;
          list<int>::iterator it = add[key];
          li.erase(it);
          add.erase(key);
          li.push_front(key);
          add[key]= li.begin();
          return mp[key];

    }
    int put(int key , int value)
    {
          if(mp.find(key) != mp.end())
        {
            li.erase(add[key]);
            add.erase(key);
            mp.erase(key);
            siz--;

        }
        if(siz == cap)
        {
            int ans = li.back(); // it point to the LRU
            li.pop_back();
            add.erase(ans);
            mp.erase(ans); // value 
            siz--;
        }
            li.push_front(key);
            add[key] = li.begin();
           return mp[key] = value;

    }

};

int main()
{
    LRU cache(3); // size of chache memeroy 

    cache.put(1, 10);
    cache.put(2, 20);
    cache.put(3, 30);
    cache.put(4, 15);
    

        cout << cache.get(2) << std::endl; 
        cout << cache.get(1) << std::endl; 
        cout << cache.get(3) << std::endl; 
        cout << cache.get(4) << std::endl; 
        cout << cache.get(1) << std::endl;  

        cout << "Pass other Remaing "<<endl; 
        

    cache.put(5, 25);
    cache.put(6, 35);
    cache.put(7, 17);
    cache.put(8, 23);
    cache.put(9, 54);
          
        cout << cache.get(1) << std::endl; 
        cout << cache.get(6) << std::endl; 
        cout << cache.get(7) << std::endl; 
        cout << cache.get(8) << std::endl; 
        cout << cache.get(9) << std::endl; 
        cout << cache.get(2) << std::endl;  // it is pass -1 becaue it the no longer access to the memeory 

          return 0;




}
