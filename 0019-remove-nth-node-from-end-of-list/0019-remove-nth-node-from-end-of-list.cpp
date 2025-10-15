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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            return NULL;
        }
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        
        int remove=length-n;

        if(remove==0){
            ListNode* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        else{
            ListNode* curr=head;
            ListNode* prev=NULL;
            int cnt=0;
            while(cnt<remove){
                prev=curr;
                curr=curr->next;
                cnt++;
            }
            prev->next=curr->next;
            curr->next=NULL;
            delete curr;
        }

        return head;
        
    }
};