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
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* rev = nullptr;
        ListNode* tmp = head;
        
        while ((fast) && (fast->next))
        {
            fast = fast->next->next;
            tmp = slow;
            slow = slow->next;
            tmp->next = rev;
            rev = tmp;
        }
        
        // odd case
        if (fast)
        {
            slow = slow->next;
        }
        
        bool ans = true;
        
        while ((slow) && (rev))
        {
            if (slow->val != rev->val)
            {
                ans = false;
                break;
            }
            
            slow = slow->next;
            rev = rev->next;
        }
        
        return ans;
    }
};
