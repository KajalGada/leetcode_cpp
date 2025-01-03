class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        sort(strs.begin(), strs.end());
        size_t size_strs = strs.size();
        string prefix {""}, first_str{strs[0]}, last_str{strs[size_strs-1]};
        size_t min_size_str = min(first_str.size(), last_str.size());
        size_t ind = 0;

        while((ind < min_size_str) && (first_str[ind] == last_str[ind]))
        {
            prefix += first_str[ind];
            ++ind;
        }

        return prefix;
    }
};
