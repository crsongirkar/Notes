//linear search 

#include<iostream>
  using namespace std;
  
  bool search(int arr[],int size,int key)
  {
      for(int i=0;i<size;i++)
      {
          if(arr[i]==key)
          {
              return 1;
          }
      }
      return 0;
  }
  int main()
  {
      int arr[10]={4,3,6,8,2,5,9,10,7,1};
      
      cout<<"Enter the key value"<<endl;
      int key;
      cin>>key;
      bool found=search(arr,10,key);
      if(found)
      {
          cout<<"Key is present "<<endl;
      }
      else{
          cout<<"key is absent"<<endl;
      }
      
  }
