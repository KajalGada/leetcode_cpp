class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        // Find max candies
        int max_candies = *max_element(candies.begin(), candies.end());
        int size_candies = candies.size();
        
        // std::cout << max_candies << std::endl;
        vector<bool> sol (size_candies);
        for (int ind = 0; ind < size_candies; ++ind)
        {
            if ((candies[ind] + extraCandies) >= max_candies)
            {
                sol[ind] = true;
            }
            else
            {
                sol[ind] = false;
            }
        }
        
        return sol;
        
    }
};
