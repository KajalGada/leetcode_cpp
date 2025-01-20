class Solution {
public:
    int jump(vector<int>& nums) {
        
        int end_ind = nums.size() - 1;

        // Calculate all the index (near_ind to far_ind) we can reach with this jump
        int jump_count = 0;
        int near_ind = 0;
        int far_ind = 0;
        
        // Loop until we have not reached end ind
        while (far_ind < end_ind)
        {
            // We jump
            jump_count += 1;
            int begin = near_ind, end = far_ind;

            // Evaluate all the index from previous jump
            for (int ind = begin; ind <= end; ++ind)
            {
                // Calculate all the index (near_ind to far_ind) we can reach from this jump
                if ( (ind <= end_ind) && (nums[ind] != 0))
                {
                    near_ind = max(near_ind, ind+1);
                    // How far can we go?
                    far_ind = max(far_ind, (ind + nums[ind]));
                }
            }
        }

        return jump_count;
        
    }
};
