class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int s_size = s.size();
        if (s_size < 2)
        {
            return s_size;
        }
        
        int arr[256] = {0};
        int start_ind = 0;
        int max_len = 0;
        
        for (int ind = 0; ind < s_size; ++ind)
        {
            if (arr[s[ind]] != 0)
            {
                start_ind = max(arr[s[ind]], start_ind);
            }
            max_len = max(max_len, (ind - start_ind + 1));
            arr[s[ind]] = ind + 1;
        }
        
        return max_len;
        
    }
};
