//https://leetcode.com/problems/swap-nodes-in-pairs/description/
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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* fast,*slow;
        slow=head;
        fast=head->next;
        while(fast->next!=nullptr&&fast->next->next!=nullptr){
            int tmp= slow->val;
            slow->val=fast->val;
            fast->val=tmp;
            slow=slow->next->next;
            fast=fast->next->next;
        }
        int t= slow->val;
            slow->val=fast->val;
            fast->val=t;
        return head;

        
    }
};