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
    bool hasCycle(ListNode *head) {
        if(head == NULL || head -> next == NULL) return false;
        map<ListNode*, int> hsh;
        ListNode* temp = head;
        while(temp){
            hsh[temp] += 1;
            if(hsh[temp -> next]){
                return true;
            }
           
            temp = temp -> next;
        }
        return false;
        
    }
};