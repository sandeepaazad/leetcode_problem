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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL && head->next==NULL)
            return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* curr=head->next;
        ListNode* prevcurr=head;
        while(curr){
            if(curr->val<prevcurr->val){
                ListNode* prev=dummy;
                while(prev->next->val<curr->val){
                    prev=prev->next;
                }
                prevcurr->next=curr->next;
                curr->next=prev->next;
                prev->next=curr;
                curr=prevcurr->next;
            }
            else{
                prevcurr=curr;
                curr=curr->next;
            }
        }
    return dummy->next;    
    }
};