class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        int arr[100] = {};
        
        int nums_size = nums.size();
        int num_pairs = 0;
        
        for (int ind = 0; ind < nums_size; ++ind)
        {
            int n = nums[ind];
            arr[n-1] += 1;
            num_pairs += (arr[n-1] - 1);
        }
        
        return num_pairs;
        
    }
};
