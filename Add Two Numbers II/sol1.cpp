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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        vector<int> nums1;
        
        while (l1)
        {
            nums1.push_back(l1->val);
            l1 = l1->next;
        }
        
        vector<int> nums2;
        
        while (l2)
        {
            nums2.push_back(l2->val);
            l2 = l2->next;
        }
        
        int tot = 0, carry = 0, num_val = 0;
        ListNode* head = nullptr;
        
        while ((nums1.size() > 0) && (nums2.size() > 0))
        {
            tot = nums1.back() + nums2.back() + carry;
            nums1.pop_back();
            nums2.pop_back();
            num_val = tot%10;
            carry = tot/10;
            
            ListNode* tmp = new ListNode(num_val, head);
            head = tmp;
        }
        
        while (nums1.size() > 0)
        {
            tot = nums1.back() + carry;
            nums1.pop_back();
            num_val = tot%10;
            carry = tot/10;
            
            ListNode* tmp = new ListNode(num_val, head);
            head = tmp;
        }
        
        while (nums2.size() > 0)
        {
            tot = nums2.back() + carry;
            nums2.pop_back();
            num_val = tot%10;
            carry = tot/10;
            
            ListNode* tmp = new ListNode(num_val, head);
            head = tmp;
        }
        
        if (carry)
        {
            ListNode* tmp = new ListNode(carry, head);
            head = tmp;
        }
        
        return head;
        
    }
};
