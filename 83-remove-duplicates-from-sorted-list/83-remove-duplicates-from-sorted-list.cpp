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
        ListNode* currNode=head;
        while(currNode && currNode->next){
            ListNode* nextNode=currNode->next;
            if(currNode->val==nextNode->val){
                currNode->next=nextNode->next;
            }else{
                currNode=nextNode;
            }
        }
        return head;
    }
};
