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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *slow, *fast;
        slow = head;
        fast = head->next;
        int sum = 0;
        while(fast!=NULL){
            if(fast->val==0){
                slow->val = sum;
                slow->next = fast;
                if(fast->next==NULL){
                    slow->next = NULL;
                }
                slow = fast;
                fast = fast->next;
                sum = 0;
                // cout << slow->val << " " << head->val << " " << sum << " ";
            }
            else{
                sum = sum + fast->val;
                fast = fast->next;
                // cout << "#";
            }
            // cout << sum << " ";
        }
        
        return head;
    }
};