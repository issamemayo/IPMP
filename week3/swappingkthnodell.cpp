//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        ListNode*travel=head;
        while(travel!=nullptr){
            count++;
            travel=travel->next;
        }
        travel=head;
        ListNode*tmp1;
        
        for(int i=1;i<k;i++){
            travel=travel->next;

        }
        tmp1=travel;
        travel=head;
         for(int i=1;i<count-k+1;i++){
            travel=travel->next;


        }
        int tmp=travel->val;
        travel->val=tmp1->val;
        tmp1->val=tmp;


        return head;        
    }
    
};