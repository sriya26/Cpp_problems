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
        map<int, bool> dupe;
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            if(!dupe[curr->val]){
                dupe[curr->val]=true;
                prev=curr;
                curr=curr->next;
            }
            else{
                prev->next=curr->next;
                ListNode* del= curr;
                del->next=NULL;
                delete del;
                curr=prev->next;
            }
        }

        return head;
        
    }
};