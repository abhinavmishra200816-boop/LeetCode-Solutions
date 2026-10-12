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
 ListNode* reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
          if (!head || !head->next) return true;
        ListNode* temp=head;
        ListNode* half = head;
        while(temp!=nullptr && temp->next!=nullptr){
            half = half->next;
            temp=temp->next->next;
        }
        
     ListNode* head1 = reverseLL(half);
     ListNode* temp1=head;
      temp=head1;
     
        while(temp != nullptr ){
            if(temp->val == temp1->val){
                temp=temp->next;
                temp1=temp1->next;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};