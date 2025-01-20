class Solution {
public:
    int jump(vector<int>& nums) {
        unordered_map <int, int> jump_count;
        jump_count[0] = 0;
        size_t nums_size = nums.size();

        for (size_t cur_ind = 0; cur_ind < (nums_size-1); ++cur_ind)
        {
            int max_jump_ind = cur_ind + nums[cur_ind];
            // Can I make it to my current position and can I take jumps from here?
            auto it = jump_count.find(cur_ind);
            if ( (it != jump_count.end()) && (max_jump_ind > cur_ind) ) 
            {
                int cur_jump_count = jump_count[cur_ind];
                for (size_t jump_ind = cur_ind + 1; jump_ind <= max_jump_ind; ++jump_ind)
                {
                    // Have I reached this index before? If yes, then check for min jumps and update
                    it = jump_count.find(jump_ind);

                    if (it != jump_count.end())
                    {
                        jump_count[jump_ind] = min(jump_count[jump_ind], cur_jump_count + 1);
                    }
                    // Else add I can this reach this index
                    else
                    {
                        jump_count[jump_ind] = cur_jump_count + 1;
                    }
                }


            }
            
        }

        return jump_count[nums_size-1];
    }
};
