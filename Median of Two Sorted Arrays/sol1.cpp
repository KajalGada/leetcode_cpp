class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if (nums1.size() > nums2.size())
        {
            vector<int> tmp = nums1;
            nums1 = nums2;
            nums2 = tmp;
        }
        
        int nums_size1 = nums1.size(), nums_size2 = nums2.size();

        int comb_size = nums_size1 + nums_size2;
        int comb_size_half = comb_size/2;
        bool odd = comb_size%2;
        double ans = 0.0;
        
        if (nums_size1 == 0)
        {
            if (odd)
            {
                ans = nums2[comb_size_half];
            }
            else
            {
                ans = ((nums2[comb_size_half]+nums2[comb_size_half-1]))/2.0;
            }
            return ans;
            
        }
        
        /*
        Goal find the left part of combined array.
        This left part has part1 in nums1 array and part2 in nums2 array.
        Part1 is from 0 to part1_ind & part2 is from 0 to part2_ind.
        part1_left is the last element, 
        part1_right is next element in part1 which could be median of combined array.
        To find part1 we use left and right.
        */
        
        int left = 0, right = nums_size1 - 1;
        int part1_left = 0, part1_right = 0, part2_left = 0, part2_right = 0;
        int part1_ind = 0, part2_ind = 0;
        
        while (true)
        {
            // std::cout << "Loop" << std::endl;
            // Part1 ind is last element in part1 which is left part of combined array
            part1_ind = (left+right)/2;
            if (right < 0)
            {
                part1_ind = -1;
            }
            
            /* 
            part1_size = part1_ind + 1
            part2_size = comb_size_half - part1_size
            part2_size = comb_size_half - part1_ind - 1
            part2 ind is last element in part2. 
            Index is -1 of size as index starts at 0.
            */
            part2_ind = comb_size_half - part1_ind - 2;
            
            part1_left = INT_MIN;
            if ((0 <= part1_ind) && (part1_ind < nums_size1))
            {
                part1_left = nums1[part1_ind];
            }
            
            part1_right = INT_MAX;
            if ((0 <= (part1_ind + 1)) && ((part1_ind + 1) < nums_size1))
            {
                part1_right = nums1[part1_ind+1];
            }
            
            part2_left = INT_MIN;
            if ((0 <= part2_ind) && (part2_ind < nums_size2))
            {
                part2_left = nums2[part2_ind];
            }
            
            part2_right = INT_MAX;
            if ((0 <= (part2_ind + 1)) && ((part2_ind + 1) < nums_size2))
            {
                part2_right = nums2[part2_ind+1];
            }
            
            // Did we get it?
            if ((part1_left <= part2_right) and (part2_left <= part1_right))
            {
                if (odd)
                {
                    ans = min(part1_right, part2_right);
                }
                else
                {
                    ans = ((max(part1_left,part2_left)) + (min(part1_right,part2_right)))/2.0;
                }
                break;
            }
            else if (part1_left > part2_right)
            {
                right = part1_ind - 1;
            }
            else
            {
                left = part1_ind + 1;
            }
            
            
        }
        
        return ans;
        
    }
};
