class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int size_str = s.size();
        int len_long {0}, start_ind {0}, char_num {0};
        vector<int> char_map (256, -1);

        for (int cur_ind = 0; cur_ind < size_str; ++cur_ind)
        {
            // Convert to ascii for easy mapping
            char_num = int(s[cur_ind]);

            // Have I seen this char before?
            if (char_map[char_num] != -1)
            {
                len_long = max(len_long, (cur_ind - start_ind));
                // Super important: start ind can't go back, only forward
                start_ind = max(start_ind, char_map[char_num] + 1);
            }
            char_map[char_num] = cur_ind;
        }

        // incase you didn't encounter any more common char
        len_long = max(len_long, (size_str - start_ind));
        
        return len_long;
    }
};
