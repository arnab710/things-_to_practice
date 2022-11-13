class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      int max_val = nums[0];
      int min_val = nums[0];
      int ans = nums[0];
      int size = nums.size();
      
      for(int i = 1; i< size ;i++){
       if(nums[i]<0)  swap(max_val,min_val);
          
          max_val = max(nums[i], max_val * nums[i]);
          min_val = min(nums[i], min_val * nums[i]);
        
        ans = max(max_val,ans);
      }
      return ans;
    }
};

