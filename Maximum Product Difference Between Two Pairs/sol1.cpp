class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        std::sort(nums.begin(), nums.end());
        
        int last_ind = nums.size() - 1;
        int sol = (nums[last_ind] * nums[last_ind-1]) - (nums[0] * nums[1]);
        
        return sol;
        
    }
};
