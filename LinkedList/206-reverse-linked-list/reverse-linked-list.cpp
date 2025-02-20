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
    ListNode* reverseList(ListNode* head) {

        //bruteforce

        if(head == NULL || head->next == NULL){
            return head;

        }
        // vector<int>vec;
        // ListNode * temp = head;


        // while(temp){
        //     vec.push_back(temp->val);
        //     temp = temp->next;
        // }


        // reverse(vec.begin() , vec.end());

        // head = NULL;

        // if(head == NULL){
        //     head = new ListNode(vec[0]);
        // }

        // temp = head;


        // for(int i = 1 ; i<vec.size() ; i++){
        //     ListNode *temp1 = new ListNode(vec[i]);
        //     temp->next = temp1;
        //     temp = temp1;

        // }

        // return head;

        // recursive

 ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *front = NULL; // Make sure front is initialized to NULL.

        while(curr != NULL) {
            front = curr->next;  // Store the next node before changing pointers
            curr->next = prev;   // Reverse the current node's pointer
            prev = curr;         // Move prev to current
            curr = front;        // Move to the next node
        }

        return prev;  // prev will be the new head of the reversed list
    }

        

    
};