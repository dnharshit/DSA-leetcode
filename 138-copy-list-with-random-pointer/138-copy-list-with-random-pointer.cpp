/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *prev, *curr, *temp, *ans;
        prev = head;
        // cout << head->next->random << endl;
        if(head==NULL){
            return head;
        }
        while(prev!=NULL){
            curr = new Node(prev->val);
            curr->next = prev->next;
            // next = prev->next;
            prev->next = curr;
            prev = curr->next;
            
        }
        
        prev = head;
        curr = ans = head->next;
        
        // cout << head->next->next->random << endl;
        while(1){
            if(prev->random==NULL){
                curr->random = NULL;
                // cout << "*";
            }
            else{
                curr->random = prev->random->next;
                // cout << "-";
            }
            prev = curr->next;
            if(prev==NULL){
                curr->next = NULL;
                break;
            }
            
            curr = prev->next;
        }
        
        // cout << head->next->next->random << endl;
        
        prev = head;
        curr = ans;
        while(1){
            prev->next = curr->next;
            prev = prev->next;
            if(prev==NULL){
                break;
            }
            curr->next = prev->next;
            curr = curr->next;
        }
        // cout << endl;
        // cout << head->next->random;
        // cout << endl;
        // cout << ans->next->random->val;
        // head = head->next;
        // while(head!=NULL){
        //     cout << head->val << " ";
        //     head = head->next;
        // }
        return ans;
    }
};