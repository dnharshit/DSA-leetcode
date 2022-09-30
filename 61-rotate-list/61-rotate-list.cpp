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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        int size=0;
        if(temp==NULL) return head;
        if(temp!=NULL) size = 1;
        while(temp->next!=NULL){
            temp=temp->next;
            size++;
        }
        k = k%size;
        if(k==0) return head;
        cout << k << " ";
        temp->next = head;
        temp = head;
        for(int i=0; i<size-k-1; i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next = NULL;
        return head;
    }
};