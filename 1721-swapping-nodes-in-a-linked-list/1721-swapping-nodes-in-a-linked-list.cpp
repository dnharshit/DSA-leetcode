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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *slow, *fast, *firstk;
        slow = fast = head;
        int firstkVal;
        for(int i=0; i<k-1; i++){
            fast = fast->next;
        }
        cout << fast->val;
        firstk = fast;
        firstkVal = fast->val;
        if(fast==NULL) return head;
        while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        firstk->val = slow->val;
        slow->val = firstkVal;
        return head;
    }
};