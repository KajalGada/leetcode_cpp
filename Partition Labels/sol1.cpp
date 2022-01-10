class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        unordered_map<char, int> letter_map;
        int s_size = s.size();
        char ch;
        vector<int> tmp = {-1, -1};
        
        // Create a map of max index value for a letter
        for (int ind = 0; ind < s_size; ++ind)
        {
            ch = s[ind];
            letter_map[ch] = ind;
        }
        
        vector<int> ans;
        int start_ind = 0, last_ind = 0;
        
        // For each substring, look at the letter and all occurances of that letter should be in this substring.
        for (int ind = 0; ind < s_size; ++ind)
        {
            ch = s[ind];
            last_ind = max(last_ind, letter_map[ch]);  // What is the last index for this character as it should be in this substring.
            if (ind == last_ind)
            {
                ans.push_back(last_ind - start_ind + 1);
                start_ind = ind + 1;
            }
        }
        
        return ans;
        
    }
};
