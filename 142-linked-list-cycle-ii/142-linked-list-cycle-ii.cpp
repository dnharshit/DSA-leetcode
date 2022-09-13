/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow;
        ListNode *fast;
        slow = head;
        fast = head;
        bool isCycle = false;
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                isCycle = true;
                break;
            }
        }
        slow = head;
        if(isCycle){
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
        else{
            return NULL;
        }
    }
};