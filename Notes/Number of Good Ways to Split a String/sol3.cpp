class Solution {
public:
    int numSplits(string s) {

        int s_size = s.size();
        vector<bool> char_map(26, false); // false = not seen; true = seen
        vector<int> fwd_map;
        int unq_char = 0, char_num = 0;

        for (char ch: s)
        {
            char_num = int(ch) - int('a'); // subtracting by int('a') scales ascii map to 0 to 25 range
            if (char_map[char_num] == false)
            {
                unq_char += 1;
                char_map[char_num] = true;
            }
            fwd_map.push_back(unq_char);
        }

        vector<bool> char_map_rev(26, false);
        vector<int> rev_map (s_size, 0);
        unq_char = 0, char_num = 0;

        for (int ind = (s.size() - 1); ind >= 0; --ind)
        {
            char_num = int(s[ind]) - int('a');
            if (char_map_rev[char_num] == false)
            {
                unq_char += 1;
                char_map_rev[char_num] = true;
            }
            rev_map[ind] = unq_char;
        }

        int ans = 0;
        for (size_t ind = 0; ind < (s.size() - 1); ++ind)
        {
            if (fwd_map[ind] == rev_map[ind+1])
            {
                ans += 1;
            }
        }

        return ans;
        
    }
};
