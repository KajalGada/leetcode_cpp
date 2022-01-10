class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        queue<int> q_students;
        for (const auto s: students)
        {
            q_students.push(s);
        }
        
        queue<int> q_sandwiches;
        for (const auto s: sandwiches)
        {
            q_sandwiches.push(s);
        }
        
        int top_student = 0, top_sandwich = 0, hungry_students = 0;
        
        while (q_students.size() != hungry_students)
        {
            top_sandwich = q_sandwiches.front();
            top_student = q_students.front();
            q_students.pop();
            
            if (top_student == top_sandwich)
            {
                q_sandwiches.pop();
                hungry_students = 0;
            }
            else
            {
                q_students.push(top_student);
                hungry_students += 1;
            }
        }
        
        return hungry_students;
        
    }
};
