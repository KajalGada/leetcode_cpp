class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int max_candies = *max_element(candies.begin(), candies.end());
        int size_candies = candies.size();
        vector<bool> ans (size_candies);

        for (int ind = 0; ind < size_candies; ++ind)
        {
            ans[ind] = ( (candies[ind] + extraCandies) >= max_candies );
        }

        return ans;
    }
};
