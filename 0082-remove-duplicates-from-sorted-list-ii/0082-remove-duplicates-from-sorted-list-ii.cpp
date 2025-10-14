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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* preslow=NULL;
        while(fast!=NULL){
            if(slow->val!=fast->val){
                preslow=slow;
                slow=slow->next;
                fast=fast->next;
            }
            else{
                while(fast!=NULL && slow->val==fast->val){
                    fast=fast->next;
                }
                if(preslow==NULL){
                    head=fast;
                }
                else{
                    preslow->next=fast;
                }
                slow=fast;
                if(fast!=NULL) fast=fast->next;
            }
        }
        return head;
        
    }
};