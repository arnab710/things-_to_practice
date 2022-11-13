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

//easy to understand and explain
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
      int maxi = INT_MIN;
      int curr = 1;
      int size = nums.size();
      
      for(int i = 0; i < size; i++){
        
          curr *= nums[i];
          maxi = max(maxi,curr);
        
          if(curr==0) curr = 1;
      }
      
      curr = 1;
      for(int i = size - 1; i>=0;i--){
        
        curr *= nums[i];
        maxi = max(maxi,curr);
        
        if(!curr) curr = 1;
      }
      
      return maxi;
    }
};
