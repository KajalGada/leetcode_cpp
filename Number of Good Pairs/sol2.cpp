class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int num_good_pairs = 0, nums_size = nums.size(), n = 0;
        unordered_map<int, int> nums_map;
        
        for (int ind = 0; ind < nums_size; ++ind)
        {
            n = nums[ind];
            auto it = nums_map.find(n);
            if (it != nums_map.end())
            {
                num_good_pairs += nums_map[n];
                nums_map[n] += 1;
            }
            else
            {
                nums_map[n] = 1;
            }
        }
        
        return num_good_pairs;
            
        
    }
};
