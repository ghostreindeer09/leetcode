// Last updated: 8/2/2025, 10:47:59 PM
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0);
        ListNode* ptr = result;
        int carry = 0;
        while(l1 || l2){
            int sum = carry;
            if(l1){
                sum +=l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
           carry = sum/10;
           sum = sum%10;
            
            ptr->next = new ListNode(sum);
            ptr = ptr->next;
            if(carry) ptr->next = new ListNode(carry);
        }
        return result->next; 
    }
};