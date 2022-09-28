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
        ListNode *iter=head;
        int len=0, i=1;
        while(iter) iter=iter->next, len++;
        if(n==len) return head->next;
        for(iter=head;i<len-n;i++) iter=iter->next;
        iter->next=iter->next->next;
        return head;
    }
};