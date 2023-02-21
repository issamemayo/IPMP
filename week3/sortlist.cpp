//https://leetcode.com/problems/sort-list/description/
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
    ListNode* sortList(ListNode* head) {
        map<int,int>s;
        ListNode* travel =head;
        while(travel!=nullptr){
            s[travel->val]+=1;
            travel=travel->next;

        }
        travel=head;
        for (auto v:s){
            for(int i=0;i<v.second;i++){
            travel->val = v.first;
            travel =travel->next;}
        }
        return head;
    }
};