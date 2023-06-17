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
        map<ListNode* , int> hshmp;
        ListNode* temp = head;
        while(temp != NULL){
            hshmp[temp]++;
            if(hshmp[temp -> next]){
                return temp -> next;
            }
            temp = temp -> next;
        }
        return NULL;
        
    }
};