class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int nums_size = nums.size();
        vector<int> ans;
        
        int tmp = 1;
        for (int ind = 0; ind < nums_size; ++ind)
        {
            ans.push_back(tmp);
            tmp = tmp * nums[ind];
        }
        
        tmp = 1;
        for (int ind = (nums_size-1); ind >= 0; --ind)
        {
            ans[ind] = ans[ind] * tmp;
            tmp = tmp * nums[ind];
        }
        
        return ans;
        
    }
};
