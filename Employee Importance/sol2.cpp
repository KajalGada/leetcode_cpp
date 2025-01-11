/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {

        // Create map of employees
        unordered_map<int, Employee*> emp_map;
        for (auto& emp : employees)
        {
            emp_map[emp->id] = emp;
        }

        vector<int> vec_ids {id};
        int total_imp {0}, cur_id{0};

        while ( !vec_ids.empty() )
        {

            // Pop employee to evaluate
            cur_id = vec_ids.back();
            vec_ids.pop_back();

            // Find employee details from map
            auto& emp = emp_map[cur_id];

            // Compute importance
            total_imp += emp->importance;

            // Add subordinates to evaluate
            vector<int> sub = emp->subordinates;
            vec_ids.insert(vec_ids.end(), sub.begin(), sub.end());
        }

        return total_imp;
    }
};
