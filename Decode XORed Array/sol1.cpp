class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int> res;
        res.push_back(first);
        int len = encoded.size();
        
        for (int ind = 0; ind < len; ++ind)
        {
            first = first ^ encoded[ind];
            res.push_back(first);
        }
        
        return res;
        
    }
};
