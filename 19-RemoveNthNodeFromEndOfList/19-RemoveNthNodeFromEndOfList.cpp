// Last updated: 8/2/2025, 10:47:53 PM
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
        ListNode* dummy = new ListNode(0,head);
        ListNode* slow = dummy, *fast = dummy;
        for(int i=0;i<=n;i++){
            fast = fast->next;
        }
        while(fast){
            slow = slow->next;
            fast =  fast->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        
        ListNode* resultNode = dummy->next;
        delete dummy;
        return resultNode;
    }
};