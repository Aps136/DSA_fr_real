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
        // ptr is fast temp is slow 
       ListNode* ptr = head, *temp = head;
       for(int i=0;i<n;i++) ptr = ptr->next;
       if(!ptr) return head->next;
       while(ptr->next){
        ptr = ptr->next;
        temp = temp->next;
       }
       temp->next = temp->next->next;
       return head; 


        
    }
};


//TC: O(L) SC: O(1)
