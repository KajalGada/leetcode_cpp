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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* head = list1;
        
        for (int ind = 0; ind < (a-1); ++ind)
        {
            list1 = list1->next;
        }
        
        ListNode* a_minus_1 = list1;
        list1 = list1->next;
        a_minus_1->next = list2;
        
        while (list2->next)
        {
            list2 = list2->next;
        }
        
        for (int ind = 0; ind < ((b-a)+1); ++ind)
        {
            list1 = list1->next;
        }
        
        list2->next = list1;
        
        return head;
        
    }
};
