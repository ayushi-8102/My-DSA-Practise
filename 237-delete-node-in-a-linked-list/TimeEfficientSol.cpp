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
  //just shifting the values
  //but the issue is the node is basically never deleted from here hence it will fill the stack
  //that's why this sol is not space-friendly(lol! my way of addressing)
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};
