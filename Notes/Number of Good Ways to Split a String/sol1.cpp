class Solution {
public:
    int numSplits(string s) {
        
        int s_size = s.size();
        
        // # Count occurance from left
        bool occ[26] = {};
        int count_left[s_size-1];
        
        // # First letter is only seen once
        count_left[0] = 1;
        int occ_ind = int(s[0])-int('a');
        occ[occ_ind] = 1;
        
        // # Count occurance rest of letters
        for (int ind = 1; ind < (s_size-1); ++ind)
        {
            occ_ind = int(s[ind])-int('a');
            if (occ[occ_ind] == 0)
            {
                count_left[ind] = (count_left[ind-1] + 1);
                occ[occ_ind] = 1;
            }
            else
            {
                count_left[ind] = count_left[ind-1];
            }
        }
        
        // # Count occurance from right
        bool occ_right[26] = {};
        int count_right[s_size];
        
        // # Last letter occurs only once
        count_right[s_size-1] = 1;
        occ_ind = int(s[s_size-1]) - int('a');
        occ_right[occ_ind] = 1;
        
        for (int ind = s_size-2; ind > 0; --ind)
        {
            occ_ind = int(s[ind])-int('a');
            if (occ_right[occ_ind] == 0)
            {
                count_right[ind] = (count_right[ind+1] + 1);
                occ_right[occ_ind] = 1;
            }
            else
            {
                count_right[ind] = count_right[ind+1];
            }
        }
        
        // # Count different ones
        int good_splits = 0;
        for (int ind = 0; ind < (s_size-1); ++ind)
        {
            if (count_left[ind] == count_right[ind+1])
            {
                good_splits += 1;
            }
        }
        
        return good_splits;
        
    }
};
