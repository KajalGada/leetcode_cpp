class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        int start = 0, end = nums.size() - 1;
        int cur_sum = 0;
        int ans_nums[2];
        
        while (start < end)
        {
            cur_sum = sorted_nums[start] + sorted_nums[end];
            if (cur_sum == target)
            {
                ans_nums[0] = sorted_nums[start];
                ans_nums[1] = sorted_nums[end];
                break;
            }
            else if (cur_sum < target)
            {
                start += 1;
            }
            else
            {
                end -= 1;
            }
        }
        
        vector<int> ans_ind(2);
        auto it_1 = find(nums.begin(), nums.end(), ans_nums[0]);
        ans_ind[0] = int(it_1 - nums.begin());
        
        auto it_2 = find(nums.begin(), nums.end(), ans_nums[1]);
        ans_ind[1] = int(it_2 - nums.begin());
        
        if (ans_ind[0] == ans_ind[1])
        {
            auto it = find(it_1+1, nums.end(), ans_nums[1]);
            ans_ind[1] = int(it - nums.begin());
        }
        
        return ans_ind;
        
    }
};
