class Solution {
public:
    bool isIsomorphic(string s, string t) {

        vector<int> s_map (256, -1);
        vector<int> t_map (256, -1);
        bool ans = true;
        size_t size_str = s.size();
        int s_num{0}, t_num{0};

        for (size_t ind = 0; ind < size_str; ++ind)
        {
            s_num = int(s[ind]);
            t_num = int(t[ind]);

            // Either same key_num or -1
            if ( s_map[s_num] == t_map[t_num]  )
            {
                s_map[s_num] = ind;
                t_map[t_num] = ind;
            }
            else
            {
                ans = false;
                break;
            }
        }

        return ans;
        
    }
};
