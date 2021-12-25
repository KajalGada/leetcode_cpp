/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int> nums;
        
        while (head)
        {
            nums.push_back(head->val);
            head = head->next;
        }
        
        vector<int> nums_rev = nums;
        reverse(nums_rev.begin(), nums_rev.end());
        
        bool ans = true;
        
        if (nums != nums_rev)
        {
            ans = false;
        }
        
        return ans;
        
    }
};
