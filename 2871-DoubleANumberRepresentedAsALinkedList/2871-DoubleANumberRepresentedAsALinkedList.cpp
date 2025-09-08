// Last updated: 9/8/2025, 10:39:47 PM
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
    int doubleList(ListNode* node){
        if(!node) return 0;
        int carry = doubleList(node->next);
        int total = node->val * 2 + carry;
        node->val = total%10;
        return total/10;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry = doubleList(head);
        if(carry){
            ListNode* newHead = new ListNode(carry);
            newHead->next = head;
            return newHead;
        }
        return head;
    }
};