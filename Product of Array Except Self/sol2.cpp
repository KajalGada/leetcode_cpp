class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int nums_size = nums.size();
        vector<int> ans;
        
        int tmp = 1;
        ans.push_back(tmp);
        for (int ind = 0; ind < (nums_size-1); ++ind)
        {
            tmp = tmp * nums[ind];
            ans.push_back(tmp);
        }
        
        tmp = nums[nums_size-1];
        for (int ind = (nums_size-2); ind >= 0; --ind)
        {
            ans[ind] = ans[ind] * tmp;
            tmp = tmp * nums[ind];
        }
        
        return ans;
        
    }
};
