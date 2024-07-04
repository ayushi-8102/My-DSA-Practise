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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*sumnode=head->next;
        ListNode*n=sumnode;
        int sum=0;
        while(sumnode){
            while(sumnode->val!=0){
                sum+=sumnode->val;
                sumnode=sumnode->next;
            }
        n->val=sum;
        sumnode=sumnode->next; 
        n->next=sumnode;
        n=n->next;
        sum=0;
        }

        return head->next;
    }
};