//https://leetcode.com/problems/reorder-list/description/
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
    void reorderList(ListNode* head) {
       vector<ListNode*> v;
       ListNode*travel=head->next;
       while(travel!=nullptr){
           v.emplace_back(travel);
           travel=travel->next;

       }
       int f=0;
       int count=0;
       travel=head;
       int l=v.size()-1;
       while(l>=f){
           if(count%2!=0){
               travel->next=v[f];
                travel=travel->next;
           count++;
               
               f++;
           }
           else {
               travel->next=v[l];
                travel=travel->next;
           count++;
               
               l--;
               
           }
          


       }
       travel->next=nullptr;

        
        
        

        
    }
};
