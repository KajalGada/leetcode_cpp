class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int s_size = s.size(), t_size = t.size();
        
        if (s_size != t_size)
        {
            return false;
        }
        
        bool res = true;
        int s_map[128] = {0};
        int t_map[128] = {0};
        
        for (int ind = 0; ind < s_size; ++ind)
        {
            if (s_map[s[ind]] != t_map[t[ind]])
            {
                res = false;
                break;
            }
            s_map[s[ind]] = ind + 1;
            t_map[t[ind]] = ind + 1;
        }
        
        return res;
        
    }
};
