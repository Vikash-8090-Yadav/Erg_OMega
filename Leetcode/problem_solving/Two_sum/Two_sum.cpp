
//Driver code not included in this. 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v2;
        for(int i = 0; i<nums.size();++i){
         // cin>>v1[i];
         v2.push_back(nums[i]);
         }
          sort(nums.begin(),nums.end());
          int x, y;
          int start  = 0;int end = nums.size()-1 ;
          while(start<end){
            if(nums[start]+nums[end] == target){
              x = nums[start];y = nums[end];
              // cout<<start<<end;
                // return ;
              break;
            }

            else if(nums[start]+nums[end]>target){

              end--;

            }
            else{
              start++;
            }

          }
        unordered_set<int> v3;
        vector<int> v1;
          for(int i = 0 ; i<nums.size(); ++i){
            if(v2[i] == x)v3.insert(i);
            if(v2[i]==y)v3.insert(i);

          }
        for(auto x : v3){
            v1.push_back(x);
        }
        // sort(v1.begin(),v1.end());
        return v1;
    }
    
};