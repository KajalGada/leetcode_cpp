class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        // Compute how many students want circular & square sandwiches.
        int students_sq = 0;
        for (const int &s: students)
        {
            students_sq += s;
        }
        int students_cir = students.size() - students_sq;
        
        int hungry_students = 0, sandwiches_size = sandwiches.size(), top_sandwich = 0;
        
        // Loop through each sandwich and reduces number of students that need that sandwich type.
        for (int ind = 0; ind < sandwiches_size; ++ind)
        {
            
            top_sandwich = sandwiches[ind];
            
            if ((sandwiches[ind] == 0) && (students_cir > 0))
            {
                students_cir -= 1;
            }
            else if ((sandwiches[ind] == 1) && (students_sq > 0))
            {
                students_sq -= 1;
            }
            // If nobody wants the top sandwich, then all the remaining students go hungry.
            else
            {
                hungry_students = sandwiches_size - ind;
                break;
            }
        }
        
        return hungry_students;
        
    }
};
