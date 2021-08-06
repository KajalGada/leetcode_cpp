class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        sort (arr.begin(), arr.end());
        vector<int> num_occ;
        int ind = 0;
        int len = arr.size();
        int cur_occ = 0;
        
        while (ind < len)
        {
            cur_occ = 1;
            while (((ind+1) < len) and (arr[ind+1] == arr[ind]))
            {
                ind += 1;
                cur_occ += 1;
            }
            num_occ.push_back(cur_occ);
            ind += 1;
        }
        
        ind = 1;
        len = num_occ.size();
        sort(num_occ.begin(), num_occ.end());
        bool res = true;
        
        while (ind < len)
        {
            if (num_occ[ind] == num_occ[ind-1])
            {
                res = false;
                break;
            }
            ind += 1;
        }
        
        return res;
        
    }
};
