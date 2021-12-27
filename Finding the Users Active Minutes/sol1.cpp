class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        unordered_map<int, set<int>> map;
        int logs_size = logs.size();
        vector<int> user_info;
        vector<int> user_ids;
        
        for (int ind = 0; ind < logs_size; ++ind)
        {
            user_info = logs[ind];
            auto it = map.find(user_info[0]);
            if (it != map.end())
            {
                map[user_info[0]].insert(user_info[1]);
            }
            else
            {
                map[user_info[0]] = {user_info[1]};
                user_ids.push_back(user_info[0]);
            }
        }
        
        vector<int> ans(k, 0);
        int len = 0, len_user = user_ids.size();
        
        for (int ind = 0; ind < len_user; ++ind)
        {
            // len = (set(map[user_ids[ind]])).size();
            len = (map[user_ids[ind]]).size();
            ans[len-1] += 1;
        }
        
        return ans;
        
    }
};
