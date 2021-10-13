class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans = {0, 0};
        unordered_map<int, int> num_ind;
        
        int ind = 0, nums_size = nums.size(), cur_num = 0, rem = 0;
        bool ans_found = false;
        
        while ((ind < nums_size) and (ans_found == false))
        {
            // Compute the expected number (remainder) to reach target
            cur_num = nums[ind];
            rem = target - cur_num;
            
            // Check if we have already seen the remainder number
            auto it = num_ind.find(rem);
            if (it != num_ind.end())
            {
                ans[0] = it->second;
                ans[1] = ind;
                ans_found = true;
            }
            
            // Else add this number and its index
            else
            {
                num_ind[cur_num] = ind;
            }
            ++ind;
        }
        
        return ans;
        
    }
};
