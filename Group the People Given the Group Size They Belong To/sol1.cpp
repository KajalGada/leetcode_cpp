class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>> groups;
        int num_people = groupSizes.size(), g_size = 0;
        vector<int> cur_group;
        unordered_map<int, vector<int>> groups_map;
        
        for (int ind = 0; ind < num_people; ++ind)
        {
            g_size = groupSizes[ind];

            cur_group = {};
            auto it = groups_map.find(g_size);
            if (it != groups_map.end())
            {
                cur_group = groups_map[g_size];
            }
            cur_group.push_back(ind);

            if (cur_group.size() == g_size)
            {
                groups.push_back(cur_group);
                groups_map[g_size] = {};
            }
            else
            {
                groups_map[g_size] = cur_group;
            }
        }
        
        
        return groups;
        
    }
};
