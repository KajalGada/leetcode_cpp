class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {

        int max_sat {0}, cur_sat{0}, cumm_sat{0};

        sort(satisfaction.begin(), satisfaction.end(), greater<>());

        for (auto sat: satisfaction)
        {
            cumm_sat += sat;
            cur_sat += cumm_sat;
            max_sat = max(max_sat, cur_sat);
        }

        return max_sat;


        
    }
};
