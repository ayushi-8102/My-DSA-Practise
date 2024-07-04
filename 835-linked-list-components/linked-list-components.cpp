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
    int numComponents(ListNode* head, vector<int>& nums) {
        int ans=0;
       set<int>st;
        for(auto i:nums)st.insert(i);
        while(head){
           if(st.count(head->val)&&(head->next==NULL || !st.count(head->next->val)))ans++;
           head=head->next;

            }
         return ans;
    }
};