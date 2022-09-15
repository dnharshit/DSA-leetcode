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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *temp1, *temp2, *temp3;
        temp1 = list1;
        int count = 0;
        while(count<=b){
            if(count==a-1){
                temp2 = temp1->next;
                temp1->next = list2;
                temp1 = temp2;
                count++;
            }
            if(count == b){
                temp3 = temp1->next;
                count++;
            }
            else{
                temp1 = temp1->next;
                count++;
            }
        }
        temp2 = list2;
        while(temp2->next!=NULL){
            temp2 = temp2->next;
        }
        temp2->next = temp3;
        return list1;
    }
};