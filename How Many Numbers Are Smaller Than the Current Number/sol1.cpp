class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        int nums_size = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        
        vector<int> count_nums(101);
        count_nums[sorted_nums[0]] = 0;
        
        for (int ind = 1; ind < nums_size; ++ind)
        {
            if (sorted_nums[ind] != sorted_nums[ind-1])
            {
                count_nums[sorted_nums[ind]] = ind;
            }
        }
        
        vector<int> ans(nums_size);
        for (int ind = 0; ind < nums_size; ++ind)
        {
            ans[ind] = count_nums[nums[ind]];
        }
        
        return ans;
        
    }
};
