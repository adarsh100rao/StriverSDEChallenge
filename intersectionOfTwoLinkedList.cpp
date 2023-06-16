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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int szA = 0, szB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA != NULL){
            tempA = tempA -> next;
            szA++;
        } 
        while(tempB != NULL){
            tempB = tempB -> next;
            szB++;
        }
        if(szA > szB){
            while(szA > szB){
                headA = headA -> next;
                szA--;
            }
        }
        else if(szA < szB){
            while(szB > szA){
                headB = headB -> next;
                szB--;
            }
        }
        while(headA != NULL && headB != NULL){
            if(headA == headB){
                return headA;

            }
            headA = headA -> next;
            headB = headB -> next;
        }
        return NULL;
        
        
    }
};