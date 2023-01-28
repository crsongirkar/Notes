class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {

        sort(n.begin(),n.end());

        vector<vector<int>>res;

        for(int i=0;i<n.size()-2;i++)


        {

               if(i==0 || (i> 0 && n[i]!= n [i-1]))
               {
                   int low = i+1 , high = n.size()-1 , sum=0 -n[i];

               
               while(low < high)
               {
                   if(n [low] + n[high] == sum)
                   {
                   
                   vector<int>temp;
                    temp.push_back(n[i]);
                    temp.push_back(n[low]);
                    temp.push_back(n[high]);

                    res.push_back(temp);
                         
                     
                   while(low < high && n[low]==n[low+1])low++;
                    while(low < high && n[high]==n[high-1])high--;
                    low++;
                    high--;


             }
               else if(n[low]+n[high] < sum) low++;

               else high--;
           }  

        }
    }
        return res;
    }
};
