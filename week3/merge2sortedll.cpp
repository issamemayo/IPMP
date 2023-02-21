//https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 ==nullptr ){
            return list2;
        }
        if(list2==nullptr){
            return list1;
        }
        if(list1->val<= list2->val){
            ListNode* travel= list1;
            ListNode* head = list1;
            ListNode*tmp;
            while(head!=nullptr && head->next!=nullptr && list2!=nullptr){
                if(head->next->val <= list2->val){
                    head=head->next;
                }
                else{
                    tmp=head->next;
                    head->next=list2;
                    list2=tmp;
                    
                }
            }
            head->next=list2;
            return travel;
        

        }
         else{
            ListNode* travel= list2;
            ListNode* head = list2;
            ListNode*tmp;
            while(head!=nullptr && head->next!=nullptr && list1!=nullptr){
                if(head->next->val <= list1->val){
                    head=head->next;
                }
                else{
                    tmp=head->next;
                    head->next=list1;
                    list1=tmp;
                    
                }
            }
            head->next=list1;
            return travel;
        

        }
        
    }
};