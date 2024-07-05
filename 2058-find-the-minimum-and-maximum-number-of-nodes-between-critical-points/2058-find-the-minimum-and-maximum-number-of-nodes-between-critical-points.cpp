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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>res={-1,-1};
        int mindist=INT_MAX;
        ListNode* prevNode=head;
        ListNode* currNode=head->next;
        int currIdx=1;
        int prevIdx=0;
        int firstIdx=0;
        while(currNode->next!=NULL){
            if((currNode->val < prevNode->val && currNode->val < currNode->next->val) || (currNode->val >
            prevNode->val && currNode->val >currNode->next->val)){
                if(prevIdx==0){
                    prevIdx=currIdx;
                    firstIdx=currIdx;
                }
                else{
                    mindist=min(mindist,currIdx-prevIdx);
                    prevIdx=currIdx;
                }
            }
            currIdx++;
            prevNode=currNode;
            currNode=currNode->next;
        }
        if(mindist!=INT_MAX){
            int maxdist=prevIdx-firstIdx;
            res={mindist,maxdist};
        }
        return res;
    }
};