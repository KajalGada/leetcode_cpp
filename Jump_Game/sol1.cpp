class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        bool can_jump {false};
        size_t nums_size {nums.size()}, cur_ind {0}, max_ind {0};

        while ( (cur_ind <= max_ind) && (cur_ind < nums_size))
        {
            max_ind = max(max_ind, (cur_ind + nums[cur_ind]));
            if (max_ind >= (nums_size-1))
            {
                can_jump = true;
                break;
            }
            ++cur_ind;
        }

        return can_jump;
    }
};
