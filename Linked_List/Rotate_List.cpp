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
        if(head==NULL || head->next ==NULL) return head;
        ListNode* temp = head;
        int count =1;
        while(temp->next !=NULL){
            count++;
            temp=temp->next;
        }
        if(k%count == 0) return head;
        int j = k%count;
        ListNode* slow = head;
        ListNode* fast =  head;
        while(j>0){
            fast= fast->next;
            j--;
        }
        while(fast!=NULL && fast->next !=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        ListNode* newNode = slow->next;
        slow->next = NULL;
        fast->next = head;
        return newNode;

        
    }
};

//TC: O(N) SC: O(1) 
