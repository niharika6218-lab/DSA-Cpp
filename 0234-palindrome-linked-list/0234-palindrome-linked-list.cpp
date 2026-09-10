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
        ListNode* p=nullptr;
        ListNode* temp=head;
        while(temp!=nullptr){
            ListNode* n=temp->next;
            temp->next=p;
            p=temp;
            temp=n;
        }
        return p;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* rev=reverseList(slow);
        while(rev!=nullptr){
            if(head->val != rev->val){
                return false;
            }
            head=head->next;
            rev=rev->next;
            
        }
        return true;
    }
};