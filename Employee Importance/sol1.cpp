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
        
        unordered_map<int, Employee*> emp_map;
        int emp_size = employees.size();
        
        for (int ind = 0; ind < emp_size; ++ind)
        {
            auto tmp_emp = employees[ind];
            emp_map[tmp_emp->id] = tmp_emp;
        }
        
        int total_imp = 0;
        vector<int> emp_eval;
        emp_eval.push_back(id);
        
        while (!emp_eval.empty())
        {
            auto cur_emp = emp_eval.back();
            emp_eval.pop_back();
            
            auto cur_emp_det = emp_map[cur_emp];
            total_imp += cur_emp_det->importance;
            
            auto cur_emp_sub = cur_emp_det->subordinates;
            emp_eval.insert(emp_eval.end(), cur_emp_sub.begin(), cur_emp_sub.end());
            
        }
        
        return total_imp;
        
    }
};
