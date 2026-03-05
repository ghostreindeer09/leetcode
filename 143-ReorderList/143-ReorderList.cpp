// Last updated: 05/03/2026, 14:14:18
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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        vector<int> reList;
        ListNode* temp = head;
        while(temp){
            reList.push_back(temp->val);
            temp = temp->next;
        }
        int n = reList.size();
        int left = 0, right = n-1;
        temp = head;
        bool useLeft = true;
        while(left <= right){
            temp->val = useLeft ? reList[left++] : reList[right--];
            temp = temp->next;
            useLeft = !useLeft;
        }
      
    }
};