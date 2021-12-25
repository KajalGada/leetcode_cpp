/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        bool ans = false;
        ListNode* fast = head;
        
        while ((fast) and (fast->next))
        {
            head = head->next;
            fast = fast->next->next;
            
            if (head == fast)
            {
                ans = true;
                break;
            }
        }
        
        return ans;
        
    }
};
