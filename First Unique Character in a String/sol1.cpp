class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> s_map;
        int s_size = s.size();
        char ch;
        
        for (int ind = 0; ind < s_size; ++ind)
        {
            ch = s[ind];
            auto it = s_map.find(ch);
            if (it != s_map.end())
            {
                s_map[ch] += 1;
            }
            else
            {
                s_map[ch] = 1;
            }
        }
        
        int ans = -1;
        
        for (int ind = 0; ind < s_size; ++ind)
        {
            ch = s[ind];
            if (s_map[ch] == 1)
            {
                ans = ind;
                break;
            }
        }
        
        return ans;
        
    }
};
