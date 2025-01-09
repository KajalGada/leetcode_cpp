class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {

        vector<int> ans;
        ans.push_back(first);
        int dec_n {0};

        for (auto n : encoded)
        {
            dec_n = n ^ ans.back();
            ans.push_back(dec_n);
        }

        return ans;
        
    }
};
