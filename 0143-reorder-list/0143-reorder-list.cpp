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
        stack<ListNode*>st;
    ListNode* cur = head;

        while(cur)
        {
            st.push(cur);
            cur = cur->next;
        }

        int k = st.size()/2;
        cur =head;

        while(k--)
        {
            ListNode* topnode = st.top();
            st.pop();

            ListNode* temp = cur->next;
            cur->next = topnode;

            topnode->next = temp;
            cur = temp;

        }
        cur->next=NULL;
    }
};