class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        unordered_map<int, set<int>> map;
        int logs_size = logs.size();
        vector<int> user_info;
        
        for (auto &user_info: logs)
        {
            map[user_info[0]].insert(user_info[1]);
        }
        
        vector<int> ans(k, 0);
        int len = 0;
        
        for (auto it: map)
        {
            len = it.second.size();
            ans[len-1] += 1;
        }
        
        return ans;
        
    }
};
