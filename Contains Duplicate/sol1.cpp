class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        std::sort (nums.begin(), nums.end());
        bool ans = false;
        int ind = 1, nums_size = nums.size();
        
        while (ind < nums_size)
        {
            if (nums[ind] == nums[ind-1])
            {
                ans = true;
                break;
            }
            ind += 1;
        }
        
        return ans;
        
    }
};
