class Solution{
 public:
  int Split(int num)
 {
    int num1=0;
    int num2 =0;
    
   vector<int>v;
    
    while(num>0)
    {
        v.push_back(num%10)
          num=num/10;
       
    }
   
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i+2)  // traverse the element in 2 number 
    {
       
      num1 = num1*10 + v[i];
    
    }
     for(int i=1;i<v.size();i+2)  // traverse the element in 2 number 
    {
       
      num2 = num2*10 + v[i];
    
    }
    return num1 + num2;
    
 }


};
